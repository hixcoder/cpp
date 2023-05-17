/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:06:13 by hboumahd          #+#    #+#             */
/*   Updated: 2023/05/17 12:39:37 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"



BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this = other;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
        this->_priceData = other._priceData;
        this->_amountData = other._amountData;
    }
    return *this;
}

BitcoinExchange::BitcoinExchange(std::string priceData, std::string amountData)
{
    fetchPriceData(priceData);
    fetchAmountData(amountData);
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::fetchPriceData(std::string filename)
{
    std::ifstream file(filename);
    std::string line;
    char key[100];
    float value;

    while (std::getline(file, line))
    {
        if (line == "date,exchange_rate")
            continue;
        sscanf(line.c_str(), "%[^,],%f", key, &value);
        _priceData[key] = value;
    }
}

void BitcoinExchange::fetchAmountData(std::string filename)
{
    std::ifstream file(filename);
    std::string line;
    char key[100];
    char value[100];

    while (std::getline(file, line))
    {
        if (line == "date | value" || line == "")
            continue;
        if (sscanf(line.c_str(), "%[^ ] | %[^\n]", key, value) == 2)
        {
            calculateResult(key, value, line, 0);
        }
        else
        {
            calculateResult(line, value, line, 1);
        }
    }
}

bool isFloatValid(std::string value)
{
    int dotNbr = 0;

    if (value.length() == 0)
    {
        return false;
    }
    for (size_t i = 0; i < value.length(); i++)
    {
        if (value[i] == '.')
        {
            if (i == 0 || i == value.length() - 1)
                return false;
            dotNbr++;
        }
        if (value[i] == '-' && i != 0)
        {
            return false;
        }
        if (value[i] == '+' && i != 0)
        {
            return false;
        }
        if (value[i] == 'f' && i != value.length() - 1)
        {
            return false;
        }
        if (!std::isdigit(value[i]) && value[i] != '.' && value[i] != '-' && value[i] != '+' && value[i] != 'f')
        {
            return false;
        }
    }
    if (dotNbr > 1)
    {
        return false;
    }
    return true;
}

float BitcoinExchange::getAmount(std::string value)
{
    if (isFloatValid(value))
    {
        if (value[value.length() - 1] == 'f')
        {
            value.pop_back();
        }
    }
    std::istringstream iss(value);
    float floatValue;
    if (iss >> floatValue)
    {
        return floatValue;
    }
    else
    {
        return -1.0f;
    }
}

void BitcoinExchange::calculateResult(std::string date, std::string value, std::string line, int isBadInput)
{
    std::map<std::string, float>::iterator it1;
    std::map<std::string, float>::iterator it2;
    float amount;


    amount = getAmount(value);
    if (isBadInput == 1 || !validateDate(date) || !isFloatValid(value))
    {
        std::cout << "Error: bad input => " << line << "\n";
    }
    else if (amount > 1000)
    {
        std::cout << "Error: too large a number.\n";
    }
    else if (amount < 0)
    {
        std::cout << "Error: not a positive number.\n";
    }
    else
    {
        it1 = _priceData.find(date);
        if (it1 != _priceData.end())
        {
            std::cout << date << " => " << amount << " = " << it1->second * amount << "\n";
        }
        else
        {
            it2 = _priceData.lower_bound(date);
            it2--;
            if (it2 != _priceData.end())
            {
                std::cout << date << " => " << amount << " = " << it2->second * amount << "\n";
            }
            else
            {
                std::cout << "Error: no data available for " << date << "\n";
            }
        }
    }
}

bool BitcoinExchange::validateDate(std::string date)
{
    int year, month, day, maxDaysInMonth;
    bool isLeapYear;

    if (date.length() != 10                                                             // check if the date contain 10char
        || (date[4] != '-' || date[7] != '-')                                           // check if '-' char exist at right position
        || (sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3)                 // check if all date infos are ints
        || (year < 0 || year > 9999 || month < 1 || month > 12 || day < 1 || day > 31)) // check if the dates are accurate
    {
        return (false);
    }
    isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    maxDaysInMonth = (month == 2 && isLeapYear) ? 29 : (month == 2)                                          ? 28
                                                   : (month == 4 || month == 6 || month == 9 || month == 11) ? 30
                                                                                                             : 31;
    if (day > maxDaysInMonth)
    {
        return (false);
    }
    return true;
}
