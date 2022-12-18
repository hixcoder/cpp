/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:12:27 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/17 15:05:10 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "MyHeader.hpp"
#include <cmath>


int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;


    // my test 1
    Fixed x = Fixed(2);
    Fixed y = Fixed(5);
    bool res;
    
    std::cout << "\nthe comparison operators:\n";
    res = x < y;
    std::cout << "1- the result is: " << res << "\n";
    res = x > y;
    std::cout << "2- the result is: " << res << "\n";
    res = x <= y;
    std::cout << "3- the result is: " << res << "\n";
    res = x >= y;
    std::cout << "4- the result is: " << res << "\n";
    res = x == y;
    std::cout << "5- the result is: " << res << "\n";
    res = x != y;
    std::cout << "6- the result is: " << res << "\n";


    // my test 2
    Fixed res2;
    
    std::cout << "\nthe arithmetic operators:\n";
    res2 = x + y;
    std::cout << "1- the result is: " << res2 << "\n";
    res2 = x - y;
    std::cout << "2- the result is: " << res2 << "\n";
    res2 = x * y;
    std::cout << "3- the result is: " << res2 << "\n";
    res2 = x / y;
    std::cout << "4- the result is: " << res2 << "\n";

    // my test 3
    Fixed res3;
    
    std::cout << "\nthe arithmetic operators:\n";
    res3 = Fixed::max(x, y);
    std::cout << "1- the max is: " << res3 << "\n";
    res3 = Fixed::min(x, y);
    std::cout << "2- the min is: " << res3 << "\n";
    return 0;
}