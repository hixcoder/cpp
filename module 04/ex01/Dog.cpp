/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:14:13 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/20 15:06:17 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called\n";
    this->type = "Dog";
    this->dogBrain = new Brain();
}

Dog::Dog(const Dog &other)
{
    *this = other;
    std::cout << "Dog constructor called\n";
}

Dog& Dog::operator=(const Dog &other)
{
    this->dogBrain = other.dogBrain;
    this->type = other.type;
    return *this;
}

Dog::~Dog()
{
    delete this->dogBrain;
    std::cout << "Dog destructor called\n";
}

void    Dog::makeSound() const
{
    std::cout << "The dog make a sound\n";
}