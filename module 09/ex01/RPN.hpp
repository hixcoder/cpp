/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:06:06 by hboumahd          #+#    #+#             */
/*   Updated: 2023/05/14 15:13:04 by hboumahd         ###   ########.fr       */
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
    std::stack<int> operands;
    

public:
    RPN():_expr(""){};
    RPN(std::string expr):_expr(expr){};
    ~RPN();

    void calculateExpr();
    bool isExprValid();
    int calculate(int num1, int num2, char operatorchar);
};



