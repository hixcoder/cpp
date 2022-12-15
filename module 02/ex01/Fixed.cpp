/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:31:48 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/15 15:53:11 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

// pow(2, 8) = 256

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
    // fixedPoint = 256 * i;
    fixedPoint = i * (1 << frctionlBits);
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called\n";
    // fixedPoint = 256 * f;
    fixedPoint = f * (1 << frctionlBits);
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called\n";
    this->fixedPoint = rhs.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream& output, const Fixed &rhs)
{
    output << rhs.toFloat();
    return output;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}



int Fixed::getRawBits(void) const
{
    return (fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
    fixedPoint = raw;
}

float Fixed::toFloat( void ) const
{
    float myfloat = static_cast<float>(fixedPoint / (1 << frctionlBits));
    // float myfloat = static_cast<float>(fixedPoint  >> frctionlBits);
    return myfloat;
}

int Fixed::toInt(void) const
{
    int myInt = fixedPoint / (1 << frctionlBits);
    return myInt;
}