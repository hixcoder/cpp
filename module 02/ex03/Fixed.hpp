/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:31:59 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/16 21:08:22 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>

class Fixed
{
    private:
        int fixedPoint;
        static const int frctionlBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed(int i);
        Fixed(float f);
        ~Fixed();
        
        
        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat( void ) const;
        int toInt( void ) const;
        
        Fixed& operator=(const Fixed &rhs);
        Fixed operator+(const Fixed &rhs);
        Fixed operator-(const Fixed &rhs);
        Fixed operator*(const Fixed &rhs);
        Fixed operator/(const Fixed &rhs);
        Fixed& operator++(); // pre increment
        Fixed operator++(const int); // post increment
        Fixed& operator--(); // pre decrement
        Fixed operator--(const int); // post decrement

        bool operator>(const Fixed &rhs);
        bool operator<(const Fixed &rhs);
        bool operator>=(const Fixed &rhs);
        bool operator<=(const Fixed &rhs);
        bool operator==(const Fixed &rhs);
        bool operator!=(const Fixed &rhs);
        
        
        static const Fixed& max(const Fixed &a, const Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static Fixed& min(Fixed &a, Fixed &b);
};

std::ostream& operator<<(std::ostream& output, const Fixed &rhs);
