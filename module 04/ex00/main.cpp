/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 09:58:39 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/21 13:56:42 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

int main()
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
    
        std::cout << "--------------------\n";
        std::cout << j->getType() << " j" << std::endl;
        std::cout << i->getType() << " i" << std::endl;
        std::cout << "--------------------\n";
        i->makeSound();
        j->makeSound();
        meta->makeSound();
        std::cout << "--------------------\n";

        delete meta;
        delete i;
        delete j;
    }
    
    {
        std::cout << "***********************************\n";
        const WrongAnimal* a = new WrongAnimal();
        const WrongAnimal* c = new WrongCat();
        const WrongCat* v = new WrongCat();
        
        std::cout << "--------------------\n";
        std::cout << a->getType() << " a" << std::endl;
        std::cout << c->getType() << " c" << std::endl;
        std::cout << v->getType() << " v" << std::endl;
        std::cout << "--------------------\n";
        a->makeSound(); 
        c->makeSound();
        v->makeSound();

        delete a;
        delete c;
        delete v;
    }
    return 0;
}