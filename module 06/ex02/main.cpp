/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/29 17:20:58 by hboumahd         ###   ########.fr       */
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
    std::cout << "1- type is: ";
    A *a = dynamic_cast <A *>(p);
    B *b = dynamic_cast <B *>(p);
    C *c = dynamic_cast <C *>(p);
    if (a)
        std::cout << "A object\n";
    else if (b)
        std::cout << "B object\n";
    else if (c)
        std::cout << "C object\n";
    else
        std::cout << "unknown object\n";
}

// dynamic_cast can only be used to cast pointers or references to polymorphic types 
void identify(Base& p)
{
     std::cout << "Error: NULL pointer" << std::endl;
    if (&p == NULL) {
        return;
    }
    std::cout << "2- type is: ";
    try
    {
        std::cout << "A object\n";
        A &a = dynamic_cast <A &>(p);
        (void) a;
        return ;
    }
    catch(const std::bad_cast &e){}

    try
    {
        B &b = dynamic_cast <B &>(p);
        std::cout << "B object\n";
        (void) b;
        return ;
    }
    catch(const std::bad_cast &e){}

    try
    {
        C &c = dynamic_cast <C &>(p);
        std::cout << "C object\n";
        (void) c;
        return ;
    }
    catch(const std::bad_cast &e){}
    std::cout << "unknown object\n";
}

int main()
{
    // Base *p;
    A a;
    B b;
    C c;
    Base *pb = NULL;
    // Base *pb = NULL;

    // Test identify1 function
    // identify(&b);  
    // identify(&c);  
    // identify(&a);  
    // identify(pb);

    // std::cout << "-----------------\n";
    
    // for (int i = 0; i < 20; i++)
    // {
    //     p = generate();
    //     identify(p);
    //     delete p;
    // }

    // Test identify2 function
    // identify(b);  
    // identify(c);  
    // identify(a);  
    identify(*pb);

    std::cout << "-----------------\n";
    
    // for (int i = 0; i < 20; i++)
    // {
    //     p = generate();
    //     identify(*p);
    //     delete p;
    // }
    
}
