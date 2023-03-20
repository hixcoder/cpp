/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:06:06 by hboumahd          #+#    #+#             */
/*   Updated: 2023/03/20 19:17:06 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <fstream>
# include <cstdlib> 
# include <ctime>
# include <map>

class BitcoinExchange
{
private:
    std::map<std::string, std::string> _priceData;
    std::map<std::string, std::string> _amountData;
    

public:
    BitcoinExchange();
    BitcoinExchange(std::string priceData, std::string amoutData);
    ~BitcoinExchange();

    std::map<std::string, std::string> fetchData(std::string filename);
    void calculateResult();
    bool validateDate(std::string date);
    time_t dateToSec(std::string date);
};



