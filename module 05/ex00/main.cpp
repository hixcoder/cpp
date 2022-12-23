/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/23 12:10:36 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

int main()
{
    try 
    {
        Bureaucrat b("hamid", 2);
        b.incrementGrade();
        Bureaucrat c("rachid", 149);
        c.decrementGrade();

        std::cout << b << "\n";
        std::cout << c << "\n";
    } catch (Bureaucrat::GradeTooHighException& e) {
        std::cout << "Exception: GradeTooHigh\n";
    } catch (Bureaucrat::GradeTooLowException& e) {
        std::cout << "Exception: GradeTooLow\n";
    }
}


