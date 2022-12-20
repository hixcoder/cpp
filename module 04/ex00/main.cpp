/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 09:58:39 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/20 13:05:51 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

int main()
{
    {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const WrongAnimal* i = new WrongCat();
    // Animal* k = new Cat();
   
    std::cout << "--------------------\n";
    std::cout << j->getType() << " j" << std::endl;
    std::cout << i->getType() << " i" << std::endl;
    std::cout << "--------------------\n";
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << "--------------------\n";

    // extra tests:(half half :)
    // *k = *j;
    // k->makeSound();
    // std::cout << k->getType() << " k say hello!" << std::endl; // dog
    // std::cout << "--------------------\n";

    delete meta;
    delete i;
    delete j;
    // delete k;
    }
    
    // {
    //     std::cout << "***********************************\n";
    //     const WrongAnimal* a = new WrongAnimal();
    //     const WrongAnimal* c = new WrongCat();
        
    //     std::cout << "--------------------\n";
    //     std::cout << a->getType() << " a" << std::endl;
    //     std::cout << c->getType() << " c" << std::endl;
    //     std::cout << "--------------------\n";
    //     a->makeSound(); 
    //     c->makeSound();

    //     delete a;
    //     delete c;
    // }
    return 0;
}