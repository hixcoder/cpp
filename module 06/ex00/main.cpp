/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/27 16:31:55 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

bool isSienceNum(std::string s)
{
    if (s == "inff" || s == "+inff" || s == "-inff"
        || s == "inf" || s == "+inf" || s == "-inf"
        || s == "nanf" || s == "+nanf" || s == "-nanf"
        || s == "nan" || s == "+nan" || s == "-nan")
        return true;
    return false;
}

bool isString(std::string s)
{
    bool isString = false;
    int dotsNum = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (i == 0 && (s[i] == '-' || s[i] == '+'))
            continue;
        if(!isdigit(s[i]) && s[i] != 'f' && s[i] != '.')
        {
            isString = true;
            break;
        }
    }
    if (s[0] == 'f' && s.length() > 1)
        isString = true;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
            dotsNum++;
    }
    if (dotsNum > 1)
        isString = true;
    if (isSienceNum(s))
        isString = false;
    return isString;
}

void printStrToChar(std::string s)
{
    char *endptr;
    double x = std::strtod(s.c_str(), &endptr);
    if (x > 31 && x < 127)
        std::cout << "char: \'" << static_cast<char> (x) << "\'\n";
    else if (s.length() == 1 && (isString(s) || s[0] == 'f' || s[0] == '.'))
        std::cout << "char: \'" << s << "\'\n";
    else if (x < 0 || x > 255 || isString(s) || isSienceNum(s))
        std::cout << "char: impossible\n";
    else
        std::cout << "char: Non displayable\n";
}

void printStrToInt(std::string s)
{
    char *endptr;
    double x = std::strtod(s.c_str(), &endptr);
    if (s.length() == 1 && (isString(s) || s[0] == 'f' || s[0] == '.'))
        std::cout << "int: " << static_cast<int>(s[0]) << "\n";
    else if (x < INT_MIN2 || x > INT_MAX2 || isString(s) || isSienceNum(s))
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << static_cast<int>(x) << "\n";
}

void printStrToFloat(std::string s)
{
    char *endptr;
    double x;
    
    if (s.length() == 1 && (isString(s) || s[0] == 'f' || s[0] == '.'))
        std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(s[0]) << "f\n";
    else if (isString(s))
        std::cout << "float: impossible\n";
    else
    {
        x = std::strtod(s.c_str(), &endptr);
        std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(x) << "f\n";
    }
}

void printStrToDouble(std::string s)
{
    char *endptr;
    double x;
    
    if (s.length() == 1 && (isString(s) || s[0] == 'f' || s[0] == '.'))
        std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(s[0]) << "\n";
    else if (isString(s))
        std::cout << "double: impossible\n";
    else
    {
        x = std::strtod(s.c_str(), &endptr);
        std::cout << "double: " << std::setprecision(1) << std::fixed <<  x << "\n";
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        printStrToChar(av[1]);
        printStrToInt(av[1]);
        printStrToFloat(av[1]);
        printStrToDouble(av[1]);
    }
    else
        std::cout << "Please enter: ./converst [arg1]\n";
}
