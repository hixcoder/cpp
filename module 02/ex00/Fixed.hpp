/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:31:59 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/13 14:44:50 by hboumahd         ###   ########.fr       */
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
        Fixed(Fixed &other);
        Fixed& operator=(const Fixed &rhs);
        ~Fixed();
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        
};