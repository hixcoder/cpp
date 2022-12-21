/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:00:12 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/21 12:08:53 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

A_Animal::A_Animal()
{
    this->type = "unknown";
    std::cout << "A_Animal constructor called\n";
}

A_Animal::A_Animal(const A_Animal &other)
{
    *this = other;
    std::cout << "A_Animal constructor called\n";
}

A_Animal& A_Animal::operator=(const A_Animal &other)
{
    this->type = other.type;
    return *this;
}

A_Animal::~A_Animal()
{
    std::cout << "A_Animal destructor called\n";
}


std::string A_Animal::getType() const
{
    return this->type;
}

void A_Animal::setType(std::string type)
{
    this->type = type;
}