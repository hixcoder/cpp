/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/25 17:21:21 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

int main()
{
    try 
    {
        // test construction
        // Form a1;
        // Form a2("malade form", 12, 6);
        // Form a3(a2);
        // a1 = a2;
        // std::cout << a1;
        // std::cout << a2;
        // std::cout << a3;

        // std::cout  << "------------------------\n";
        
        
        // test functions
        Form a("developer form", 9, 5);
        Bureaucrat b("hamid", 9);
        
        // part 1
        // std::cout << "|1| ************\n\n";
        // std::cout << b << "\n\n";
        // std::cout << a;
        // a.beSigned(b);
        // std::cout << a;

        // // part 2
        // std::cout << "|2| ************\n\n";
        // std::cout << b << "\n\n";
        // std::cout << a;
        
        // b.signForm(a);
        // std::cout << a;
        
        // b.decrementGrade();
        // std::cout << b << "\n\n";
        // b.signForm(a);
        // std::cout << a;
        
        // // part 3
        std::cout << "\n|3| ************\n";
        std::cout << b << "\n";
        std::cout << a;
        a.beSigned(b);
        
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
