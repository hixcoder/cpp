/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:31:48 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/16 15:18:39 by hboumahd         ###   ########.fr       */
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
    fixedPoint = i * (1 << frctionlBits);
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called\n";
    float floatFixed = roundf(f * (1 << frctionlBits));
    fixedPoint = static_cast<int> (floatFixed);
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
    float floatFixed = static_cast<float> (fixedPoint);
    float myfloat = floatFixed / (1 << frctionlBits);
    return myfloat;
}

int Fixed::toInt(void) const
{
    int myInt = fixedPoint / (1 << frctionlBits);
    return myInt;
}


// this function is out of the Fixed class
std::ostream& operator<<(std::ostream& output, const Fixed &rhs)
{
    output << rhs.toFloat();
    return output;
}