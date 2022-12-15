/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:31:59 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/15 15:53:30 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>

class Fixed
{
    private:
        float fixedPoint;
        static const int frctionlBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed( int i);
        Fixed( float f);
        
        Fixed& operator=(const Fixed &rhs);
        friend std::ostream& operator<<(std::ostream& output, const Fixed &rhs);
        ~Fixed();

        
        
        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat( void ) const;
        int toInt( void ) const;
        
        
};