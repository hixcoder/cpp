/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:06:13 by hboumahd          #+#    #+#             */
/*   Updated: 2023/05/13 23:26:23 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
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
    float amount;

    while (std::getline(file, line))
    {
        if (line == "date | value" || line == "")
            continue;
        // check what after |
        if (sscanf(line.c_str(), "%[^ ] | %s", key, value) == 2)
        {
            amount = getAmount(value);
            calculateResult(key, amount, 0);
        }
        else
        {
            amount = getAmount(value);
            calculateResult(line, amount, 1);
        }
    }
}

float BitcoinExchange::getAmount(std::string value)
{
    std::istringstream iss(value);
    float floatValue;
    if (iss >> floatValue) {
        return floatValue;
    }
    else {
        // Handle the case when the conversion fails
        // Return a default value or throw an exception
        return 0.0f;
    }
}

void BitcoinExchange::calculateResult(std::string date, float amount, int isBadInput)
{
    std::map<std::string, float>::iterator it1;
    std::map<std::string, float>::iterator it2;
    
    if (isBadInput == 1 || !validateDate(date))
    {
        std::cout << "Error: bad input => " << date << "\n";
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
        if (it1 != _priceData.end()) {
            std::cout << date << " => " << amount << " = " << it1->second * amount << "\n";
        }
        else {
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

time_t BitcoinExchange::dateToSec(std::string date)
{
    int year, month, day;
    time_t dateToSec;
    struct std::tm timeinfo;

    sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);
    timeinfo.tm_year = year - 1900;
    timeinfo.tm_mon = month - 1;
    timeinfo.tm_mday = day;
    dateToSec = std::mktime(&timeinfo);
    return dateToSec;
}
