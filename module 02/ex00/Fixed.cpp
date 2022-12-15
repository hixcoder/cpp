/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:31:48 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/13 10:22:13 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"


Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    fixedPoint = 0;
}

Fixed::Fixed(Fixed &other)
{
    std::cout << "Copy constructor called\n";
    fixedPoint = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called\n";
    this->fixedPoint = rhs.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}
                                                                                                                                                        
// other functions
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return (fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    fixedPoint = raw;
}
