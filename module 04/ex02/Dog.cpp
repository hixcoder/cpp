/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:14:13 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/21 14:11:16 by hboumahd         ###   ########.fr       */
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
    delete this->dogBrain;
    this->dogBrain = new Brain(*other.dogBrain);
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


Brain *Dog::getDogBrain() const
{
    return this->dogBrain;
}
void Dog::setDogBrain(Brain *DogBrain)
{
    delete this->dogBrain;
    this->dogBrain = DogBrain;
}