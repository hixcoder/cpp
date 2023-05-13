/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:06:06 by hboumahd          #+#    #+#             */
/*   Updated: 2023/05/13 23:25:29 by hboumahd         ###   ########.fr       */
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
    BitcoinExchange();
    BitcoinExchange(std::string priceData, std::string amountData);
    ~BitcoinExchange();

    void fetchAmountData(std::string filename);
    void fetchPriceData(std::string filename);
    float getAmount(std::string value);
    void calculateResult(std::string date, float amount, int isBadInput);
    bool validateDate(std::string date);
    time_t dateToSec(std::string date);
};



