/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:06:13 by hboumahd          #+#    #+#             */
/*   Updated: 2023/03/20 17:54:55 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    _priceData.push_back("");
    _amountData.push_back("");
    _resultData.push_back("");
}

BitcoinExchange::BitcoinExchange(std::string priceData, std::string amoutData)
{
    _priceData = fetchData(priceData);
    _amountData = fetchData(amoutData);
    
}

BitcoinExchange::~BitcoinExchange()
{
}

std::vector<std::string> BitcoinExchange::fetchData(std::string filename)
{
    std::vector<std::string> tmpData;
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) 
        tmpData.push_back(line);
    return tmpData;
}

void BitcoinExchange::calculateResult()
{
    // 2011-01-03 => 3 = 0.9
    // date + "=>" + amount = value;
    std::vector<std::string> _amountItem;
    std::vector<std::string> _priceItem;
    // int result;

    
    for (size_t i = 0; i < _amountData.size(); i++)
    {
        _amountItem = ft_split(_amountData[i], ',');
        for (size_t i = 0; i < _priceData.size(); i++)
        {
            _priceItem = ft_split(_priceData[i], ',');
            if (_amountItem[0] == _priceItem[0])
            {
                std::cout << _amountItem[0] << " => " << _amountItem[1] << " = " << atoi(_amountItem[1].c_str()) * atoi(_amountItem[1].c_str());
            }
            
        }
        
    }
    
    
}

bool BitcoinExchange::validateDate(std::string date)
{
    int year, month, day, maxDaysInMonth;
    bool isLeapYear;
    
    if (date.length() != 10 // check if the date contain 10char
        || (date[4] != '-' || date[7] != '-') // check if '-' char exist at right position
        || (sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3) // check if all date infos are ints
        || (year < 0 || year > 9999 || month < 1 || month > 12 || day < 1 || day > 31)) // check if the dates are accurate
        return (false);
    
    isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    maxDaysInMonth = (month == 2 && isLeapYear) ? 29 :
                     (month == 2) ? 28:
                     (month == 4 || month == 6 || month == 9 || month == 11) ? 30:
                     31;
    if(day > maxDaysInMonth)
        return (false);
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

std::vector<std::string> BitcoinExchange::ft_split(std::string str, char separator)
{
    std::vector<std::string> result;
    size_t i = 0;
    std::string s;
    while (i < str.size())
    {
        if (str[i] == separator || str[i] == '\n')
        {
            if (!s.empty())
            {
                result.push_back(s);
                s.clear();
            }
            if (str[i] == '\n')
                break;
        }
        else
            s += str[i];
        i++;
    }
    if (!s.empty())
        result.push_back(s);
    return (result);
}



