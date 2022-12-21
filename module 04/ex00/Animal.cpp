/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:00:12 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/21 12:09:37 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

Animal::Animal()
{
    this->type = "unknown";
    std::cout << "Animal constructor called\n";
}

Animal::Animal(const Animal &other)
{
    *this = other;
    std::cout << "Animal constructor called\n";
}

Animal& Animal::operator=(const Animal &other)
{
    this->type = other.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
}

void    Animal::makeSound() const
{
}


std::string Animal::getType() const
{
    return this->type;
}

void Animal::setType(std::string type)
{
    this->type = type;
}