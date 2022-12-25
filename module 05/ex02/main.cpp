/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/25 15:12:37 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

int main()
{
    try 
    {
        // test1
        // Bureaucrat b1("adil", 5);
        // ShrubberyCreationForm formP("school");
        // formP.beSigned(b1);
        // formP.execute(b1);

        // test2
        // Bureaucrat b1("adil", 6);
        // RobotomyRequestForm formP("dragon");
        // std::cout << b1 << "\n";
        // formP.beSigned(b1);
        // std::cout << formP;
        // formP.execute(b1);
        // formP.execute(b1);
        // formP.execute(b1);
        // formP.execute(b1);
        // formP.execute(b1);
        // formP.execute(b1);

        // test3
        // Bureaucrat b1("adil", 5);
        // PresidentialPardonForm formP("school");
        // formP.beSigned(b1);
        // formP.execute(b1);

        // test4
        Bureaucrat b1("adil", 30);
        PresidentialPardonForm formP("school");
        b1.signForm(formP);
        std::cout << formP;
        b1.executeForm(formP);
        
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}


