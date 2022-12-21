/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 09:58:39 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/21 12:29:46 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

int main()
{
    // A_Animal *a = new A_Animal();
    A_Animal *d = new Dog();
    A_Animal *c = new Cat();
    
    // std::cout << "animal: " << a->getType() << "\n";
    std::cout << "------------------\n";
    std::cout << "dog: " << d->getType() << "\n";
    std::cout << "cat: " << c->getType() << "\n";
    std::cout << "------------------\n";
    
    delete d;
    delete c;
    return 0;
}
