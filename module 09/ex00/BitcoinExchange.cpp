/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:06:13 by hboumahd          #+#    #+#             */
/*   Updated: 2023/03/20 20:10:29 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(std::string priceData, std::string amoutData)
{
    _priceData = fetchData(priceData);
    // _amountData = fetchData(amoutData);
    (void)amoutData;
    // for (std::map<std::string,std::string>::iterator it=_priceData.begin(); it!=_priceData.end(); ++it)
    // {
    //     std::cout << it->first << ", " << it->second << "\n";
    // }
    
    
}

BitcoinExchange::~BitcoinExchange()
{
}

std::map<std::string, std::string> BitcoinExchange::fetchData(std::string filename)
{
    std::map<std::string, std::string> tmpDataMap;
    std::ifstream file(filename);
    std::string line, key, value;
    int go = 0;
    
    int i = 0;
    while (std::getline(file, line))
    {
        if (i == 0 && line == "date,exchange_rate")
            continue;
        for (size_t j = 0; j < line.length(); j++)
        {
            if (line[j] == ',')
            {
                go = 1;
                j++;
            }
            if (go == 0)
                key += line[j];
            else if (go == 1)
                value += line[j];
        }
        std::cout << key << " ==> " << value << "\n";
        tmpDataMap[key] = value;
        key = "";
        value = "";
        i++;
    }
    return tmpDataMap;
}

void BitcoinExchange::calculateResult()
{
    // 2011-01-03 => 3 = 0.9
    // date + "=>" + amount = value;
    // int result;
    
    
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


// std::map<std::string, std::string> splitString(std::string str, std::string delimiter)
// {
//     std::map<std::string, std::string> result;
//     size_t pos = 0;
//     std::string token;
//     while ((pos = str.find(delimiter)) != std::string::npos)
//     {
//         token = str.substr(0, pos);
//         result.push_back(token);
//         str.erase(0, pos + delimiter.length());
//     }
//     result.push_back(str);
//     return result;
// }
