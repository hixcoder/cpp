/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:06:21 by hboumahd          #+#    #+#             */
/*   Updated: 2023/03/20 17:53:25 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <ctime>





int main(int ac, char **av) {

    if (ac == 2)
    {
        BitcoinExchange  btc("data.csv", av[1]);
        btc.calculateResult();
    }
    else
        std::cout << "please enter: ./btc inputFile\n";
    return 0;
}














