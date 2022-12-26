/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/26 15:36:46 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

void strToChar(std::string s)
{
    char *endptr;
    double x = std::strtod(s.c_str(), &endptr);
    if (x > 31 && x < 127)
        std::cout << "char: \'" << static_cast<char> (x) << "\'\n";
    else if (x < 0 || x > 255)
        std::cout << "char: impossible\n";
    else
        std::cout << "char: Non displayable\n";
}

void strToInt(std::string s)
{
    char *endptr;
    double x = std::strtod(s.c_str(), &endptr);
    if (x >= INT_MIN2 && x <= INT_MAX2)
        std::cout << "int: " << static_cast<int>(x) << "\n";
    else
        std::cout << "int: impossible\n";
}

void strToFloat(std::string s)
{
    char *endptr;
    double x = std::strtod(s.c_str(), &endptr);
    std::cout << "float: " << static_cast<float>(x) << "f\n";
}

void strToDouble(std::string s)
{
    char *endptr;
    double x = std::strtod(s.c_str(), &endptr);
    std::cout << "double: " << x << "\n";
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        strToChar(av[1]);
        strToInt(av[1]);
        strToFloat(av[1]);
        strToDouble(av[1]);
    }
    else
        std::cout << "Please enter: ./converst [arg1]\n";
}
