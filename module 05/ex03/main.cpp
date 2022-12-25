/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/25 19:28:11 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

int main()
{
    try 
    {
        Bureaucrat b("jalal", 5);
        Intern someRandomIntern;
        AForm* rrf;
        
        // test 1
        // rrf = someRandomIntern.makeForm("robotomy request", "Bender");

        // std::cout << "\n" << b << "\n\n";
        // rrf->beSigned(b);
        // std::cout << *rrf;
        // rrf->execute(b);

        // test 2
        // rrf = someRandomIntern.makeForm("shrubbery creation", "home");

        // std::cout << "\n" << b << "\n\n";
        // rrf->beSigned(b);
        // std::cout << *rrf;
        // rrf->execute(b);

        // // test 3
        // rrf = someRandomIntern.makeForm("presidential pardon", "school form");

        // std::cout << "\n" << b << "\n\n";
        // rrf->beSigned(b);
        // std::cout << *rrf;
        // rrf->execute(b);

        // // test 4
        rrf = someRandomIntern.makeForm("something else", "school form");
        std::cout << "\n" << b << "\n\n";
        rrf->beSigned(b);
        std::cout << *rrf;
        rrf->execute(b);
        
        delete rrf;
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}


