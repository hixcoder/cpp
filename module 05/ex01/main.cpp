/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/24 14:23:33 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

int main()
{
    try 
    {
        // test construction
        Form a1;
        Form a2("malade form", 1, 6);
        Form a3(a2);
        a1 = a2;
        std::cout << a1;
        std::cout << a2;
        std::cout << a3;

        std::cout  << "------------------------\n";
        // test functions
        Form a("developer form", 9, 5);
        Bureaucrat b("hamid", 9);
        
        // part 1
        std::cout << "|1| ************\n";
        std::cout << b << "\n";
        std::cout << a;
        a.beSigned(b);
        std::cout << a;

        // part 2
        std::cout << "|2| ************\n";
        std::cout << b << "\n";
        b.signForm(a);
        b.decrementGrade();
        std::cout << b << "\n";
        b.signForm(a);
        
        // part 3
        std::cout << "\n|3| ************\n";
        std::cout << b << "\n";
        std::cout << a;
        a.beSigned(b);
        
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}


