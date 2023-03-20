/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:06:06 by hboumahd          #+#    #+#             */
/*   Updated: 2023/03/20 17:52:08 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <vector>
# include <fstream>
#include <cstdlib>  // for atoi

class BitcoinExchange
{
private:
    std::vector<std::string> _priceData;
    std::vector<std::string> _amountData;
    std::vector<std::string> _resultData;
    

public:
    BitcoinExchange();
    BitcoinExchange(std::string priceData, std::string amoutData);
    ~BitcoinExchange();

    std::vector<std::string> fetchData(std::string filename);
    void calculateResult();
    std::vector<std::string> ft_split(std::string str, char separator);
    bool validateDate(std::string date);
    time_t dateToSec(std::string date);
};



