/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:06:06 by hboumahd          #+#    #+#             */
/*   Updated: 2023/05/17 18:12:09 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <stack>

class RPN
{
private:
    std::string _expr;
    std::stack<float> operands;
    

public:
    RPN(std::string expr):_expr(expr){};
    RPN():_expr(""){};
    RPN(const RPN &other);
    RPN& operator=(const RPN &other);
    ~RPN();

    void calculateExpr();
    bool isExprValid();
    float calculate(float num1, float num2, char operatorchar);
};



