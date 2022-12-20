/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:14:13 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/20 12:41:00 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog &other)
{
    *this = other;
    std::cout << "Dog constructor called\n";
}

Dog& Dog::operator=(const Dog &other)
{
    this->type = other.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
}

void    Dog::makeSound() const
{
    std::cout << "The dog make a sound\n";
}