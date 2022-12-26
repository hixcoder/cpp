/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/26 14:17:20 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

char strToChar(std::string s)
{
    char *endptr;
    int x = static_cast<int> (std::strtod(s.c_str(), &endptr));
    if (x > 31 && x < 127)
        return static_cast<char> (x);
    else if (x > 31 && x < 127)
        return (-1);
}

int strToInt(std::string s)
{
    char *endptr;
    int x = static_cast<int> (std::strtod(s.c_str(), &endptr));
    return x;
}

float strToFloat(std::string s)
{
    char *endptr;
    float x = static_cast<float> (std::strtod(s.c_str(), &endptr));
    return x;
}

double strToDouble(std::string s)
{
    char *endptr;
    double x = std::strtod(s.c_str(), &endptr);
    return x;
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int x = strToChar(av[1]);
        if (x == -1)
            std::cout << "char: Non displayable\n";
        else
            std::cout << "char: " << strToChar(av[1]) << "\n";
        std::cout << "int: " << strToInt(av[1]) << "\n";
        std::cout << "float: " << strToFloat(av[1]) << "f\n";
        std::cout << "double: " << strToDouble(av[1]) << "\n";
    }
    else
        std::cout << "Please enter: ./converst [arg1]\n";
}


