/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:06:13 by hboumahd          #+#    #+#             */
/*   Updated: 2023/05/17 13:13:31 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


RPN::RPN(const RPN &other)
{
    *this = other;
}

RPN& RPN::operator=(const RPN &other)
{
    if (this != &other)
    {
        this->_expr = other._expr;
    }
    return *this;
}

RPN::~RPN(){}

bool RPN::isExprValid()
{
    int digitNbr;

    digitNbr = 0;
    for (size_t i = 0; i < _expr.length(); i++)
    {
        if (!std::isdigit(_expr[i]) && _expr[i] != '+' && _expr[i] != '-' && _expr[i] != '*' && _expr[i] != '/' && _expr[i] != ' ')
        {
            return false;
        }
        if (std::isdigit(_expr[i]))
        {
            ++digitNbr;
            for (size_t j = digitNbr; j > 1; j--)
            {
                if (_expr[i - (j - 1)] != '0')
                {
                    return false;
                }
            }
        }
        if (_expr[i] == ' ')
        {
            digitNbr = 0;
        }
    }
    return true;
}

int RPN::calculate(int num1, int num2, char operatorchar)
{
    if (operatorchar == '-')
    {
        return (num2 - num1);
    }
    else if (operatorchar == '+')
    {
        return (num2 + num1);
    }
    else if (operatorchar == '*')
    {
        return (num2 * num1);
    }
    else if (operatorchar == '/')
    {
        return (num2 / num1);
    }
    return 0;
}

void RPN::calculateExpr()
{
    int num1, num2;

    if (!isExprValid())
    {
        std::cout << "Error\n";
        return;
    }
    for (size_t i = 0; i < _expr.length(); i++)
    {
        if (std::isdigit(_expr[i]))
        {
            operands.push(_expr[i] - 48);
        }
        if (!std::isdigit(_expr[i]) && _expr[i] != ' ')
        {
            if (operands.empty())
            {
                std::cout << "Error\n";
                return;
            }
            num1 = operands.top();
            operands.pop();
            if (operands.empty())
            {
                std::cout << "Error\n";
                return;
            }
            num2 = operands.top();
            operands.pop();
            operands.push(calculate(num1, num2, _expr[i]));
        }
    }
    if (operands.size() != 1)
    {
         std::cout << "Error\n";
                return;
    }
    std::cout << operands.top() << "\n";
}
