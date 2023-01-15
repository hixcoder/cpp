/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/29 18:04:02 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

Base * generate()
{
    int i;
    
    i = rand() % 3;
    if (i == 1)
        return (new A);
    else if (i == 2)
        return (new B);
    else 
        return (new C);
}

void identify(Base* p)
{
    A *a = dynamic_cast <A *>(p);
    B *b = dynamic_cast <B *>(p);
    C *c = dynamic_cast <C *>(p);
    if (a)
        std::cout << "A object";
    else if (b)
        std::cout << "B object";
    else if (c)
        std::cout << "C object";
    else
        std::cout << "unknown object";
}

// dynamic_cast can only be used to cast pointers or references to polymorphic types 
void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast <A &>(p);
        std::cout << "A object";
        (void) a;
        return ;
    }
    catch(const std::bad_cast &e){}
    
    try
    {
        B &b = dynamic_cast <B &>(p);
        std::cout << "B object";
        (void) b;
        return ;
    }
    catch(const std::bad_cast &e){}

    try
    {
        C &c = dynamic_cast <C &>(p);
        std::cout << "C object";
        (void) c;
        return ;
    }
    catch(const std::bad_cast &e){}
    
    std::cout << "unknown object";
}


int main()
{
    Base *p;
    A a;
    B b;
    C c;
    Base *pb = new Base;

    // Test identify1 function
    identify(&b);
    std::cout << "\n";  
    identify(&c);  
    std::cout << "\n";
    identify(&a); 
    std::cout << "\n";
    identify(pb);
    std::cout << "\n-----------------\n";
    for (int i = 0; i < 10; i++)
    {
        p = generate();
        std::cout << i + 1 << "- the type is: ";
        identify(p);
        std::cout << "\n";
        delete p;
    }

    std::cout << "********************\n";

    // Test identify2 function
    identify(c);  
    std::cout << "\n";  
    identify(b);
    std::cout << "\n";
    identify(a); 
    std::cout << "\n";
    identify(*pb);
    std::cout << "\n-----------------\n";
    for (int i = 0; i < 10; i++)
    {
        p = generate();
        std::cout << i + 1 << "- the type is: ";
        identify(*p);
        std::cout << "\n";
        delete p;
    }
    
    delete pb;
}
