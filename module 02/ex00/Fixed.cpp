/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:31:48 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/11 15:54:23 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"


Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
}


void Fixed::setA(int a)
{
    this->a = a;
}

Fixed & Fixed::operator=(const Fixed &obj)
{
    (void)obj;
    std::cout << "Default assignment called\n";
    return *this;
}

int Fixed::getA()
{
    return this->a;
}


Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}
