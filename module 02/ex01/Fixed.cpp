/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:31:48 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/13 11:26:01 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"


Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    fixedPoint = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called\n";
    fixedPoint = other.getRawBits();
}

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called\n";
    fixedPoint = i;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called\n";
    fixedPoint = f;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called\n";
    this->fixedPoint = rhs.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream& output, const Fixed &rhs)
{
    output << rhs.fixedPoint;
    if (rhs.frctionlBits != 0)
        output << "." << rhs.frctionlBits;
    return output;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}



                                                                                                                                                        
// other functions
int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called\n";
    return (fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called\n";
    fixedPoint = raw;
}

float Fixed::toFloat( void ) const
{
    // std::cout << "toFloat\n";
    return (fixedPoint);
}

int Fixed::toInt( void ) const
{
    // std::cout << "toInt\n";
    return (fixedPoint);
}