/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:31:48 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/17 15:04:43 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

// pow(2, 8) = 256

Fixed::Fixed()
{
    fixedPoint = 0;
}

Fixed::Fixed(const Fixed &other)
{
    fixedPoint = other.getRawBits();
}

Fixed::Fixed(const int i)
{
    fixedPoint = i * (1 << frctionlBits);
}

Fixed::Fixed(const float f)
{
    float floatFixed = roundf(f * (1 << frctionlBits));
    fixedPoint = static_cast<int> (floatFixed);
}

Fixed::~Fixed()
{
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

// overloaded operators

Fixed& Fixed::operator=(const Fixed &rhs)
{
    this->fixedPoint = rhs.getRawBits();
    return *this;
}

Fixed Fixed::operator+(const Fixed &rhs)
{
    Fixed tmp(Fixed(this->toFloat() + rhs.toFloat()));
    return tmp;
}

Fixed Fixed::operator-(const Fixed &rhs)
{
    Fixed tmp(Fixed(this->toFloat() - rhs.toFloat()));
    return tmp;
}

Fixed Fixed::operator*(const Fixed &rhs)
{
    Fixed tmp(Fixed(this->toFloat() * rhs.toFloat()));
    return tmp;
}

Fixed Fixed::operator/(const Fixed &rhs)
{
    Fixed tmp(Fixed(this->toFloat() / rhs.toFloat()));
    return tmp;
}

Fixed& Fixed::operator++()
{
    ++(this->fixedPoint);
    return *this;
}

Fixed Fixed::operator++(const int)
{
    Fixed tmp(this->toFloat());
    (this->fixedPoint)++;
    return tmp;
}

Fixed& Fixed::operator--()
{
    --(this->fixedPoint);
    return *this;
}

Fixed Fixed::operator--(const int)
{
    Fixed tmp(this->toFloat());
    (this->fixedPoint)--;
    return tmp;
}



bool Fixed::operator>(const Fixed &rhs)
{
    return this->fixedPoint > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed &rhs)
{
    return this->fixedPoint < rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed &rhs)
{
    return this->fixedPoint >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed &rhs)
{
    return this->fixedPoint <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed &rhs)
{
    return this->fixedPoint == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed &rhs)
{
    return this->fixedPoint != rhs.getRawBits();
}


const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if ((a.getRawBits() < b.getRawBits()))
        return b;
    return a;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if ((a.getRawBits() < b.getRawBits()))
        return a;
    return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if ((a.getRawBits() < b.getRawBits()))
        return b;
    return a;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if ((a.getRawBits() < b.getRawBits()))
        return a;
    return b;
}

// this function is out of the Fixed class
std::ostream& operator<<(std::ostream& output, const Fixed &rhs)
{
    output << rhs.toFloat();
    return output;
}
