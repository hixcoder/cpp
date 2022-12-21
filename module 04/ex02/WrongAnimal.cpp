/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:53:24 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/20 12:53:58 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MyHeader.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "unknown";
    std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    *this = other;
    std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    this->type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called\n";
}

void    WrongAnimal::makeSound() const
{
    std::cout << "The WrongAnimal make a sound\n";
}


std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}