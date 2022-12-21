/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 09:58:39 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/21 11:52:54 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

void printAnimalIdeas(Brain *b, int f)
{
    std::cout << "--------------------\n";
    if (f == 1)
        std::cout << "CAT IDEAS\n";
    else
        std::cout << "DOG IDEAS\n";
    for (int i = 0; i < b->getLenght() / 20; i++)
    {
        b->setIdeas(i, "hello world");
        std::cout << i + 1 << "- idea: " << b->getIdeas(i) << "\n";
    }
    std::cout << "--------------------\n";
}

int main()
{
    std::cout << "**************\n";
    std::cout << "*** TEST 1 ***\n";
    std::cout << "**************\n";
    
    size_t len = 4;
    Animal **a = new Animal*[len];
    for (size_t i = 0; i < len; i++)
    {
        if (i < (len / 2))
            a[i] = new Dog();
        else
            a[i] = new Cat();
    }


    std::cout << "--------------------\n";
    std::cout << "=> a[0] = " << a[0]->getType() << "\n";
    std::cout << "=> a[3] = " << a[3]->getType() << "\n";
    std::cout << "--------------------\n";
    for (size_t i = 0; i < len; i++)
    {
        delete a[i];
    }
    delete[] a;
   
    //here we test the setters and getters of ideas proprty of both animales
    std::cout << "**************\n";
    std::cout << "*** TEST 2 ***\n";
    std::cout << "**************\n";
    std::cout << "--------------------\n";
    Dog *l = new Dog();
    printAnimalIdeas(l->getDogBrain(), 56);
    delete l;

    Cat *l2 = new Cat();
    printAnimalIdeas(l2->getCatBrain(), 1);
    delete l2;
    return 0;
}
