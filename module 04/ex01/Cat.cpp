/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:14:11 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/20 15:06:09 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called\n";
    this->type = "Cat";
    this->catBrain = new Brain();
}

Cat::Cat(const Cat &other)
{
    *this = other;
    std::cout << "Cat constructor called\n";
}

Cat& Cat::operator=(const Cat &other)
{
    this->catBrain = other.catBrain;
    this->type = other.type;
    return *this;
}

Cat::~Cat()
{
    delete this->catBrain;
    std::cout << "Cat destructor called\n";
}

void    Cat::makeSound() const
{
    std::cout << "The cat make a sound\n";
}