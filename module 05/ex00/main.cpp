/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/25 16:52:24 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

int main()
{
    try 
    {
        Bureaucrat b("hamid", 2);
        b.incrementGrade();
        // b.incrementGrade();

        Bureaucrat c("rachid", 140);
        c.decrementGrade();
        c.decrementGrade();

        std::cout << b << "\n";
        std::cout << c << "\n";
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}


