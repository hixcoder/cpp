/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:14:11 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/20 12:41:05 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(const WrongCat &other)
{
    *this = other;
    std::cout << "WrongCat constructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
    this->type = other.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called\n";
}

void    WrongCat::makeSound() const
{
    std::cout << "The WrongCat make a sound\n";
}