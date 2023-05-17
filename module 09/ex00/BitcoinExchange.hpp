/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:06:06 by hboumahd          #+#    #+#             */
/*   Updated: 2023/05/17 12:15:29 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <fstream>
# include <cstdlib> 
# include <ctime>
# include <map>
#include <cstring>
#include <sstream>
class BitcoinExchange
{
private:
    std::map<std::string, float> _priceData;
    std::map<std::string, float> _amountData;
    

public:
    BitcoinExchange(std::string priceData, std::string amountData);
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange& operator=(const BitcoinExchange &other);
    ~BitcoinExchange();

    void fetchAmountData(std::string filename);
    void fetchPriceData(std::string filename);
    float getAmount(std::string value);
    void calculateResult(std::string date, std::string value, std::string line, int isBadInput);
    bool validateDate(std::string date);
};



