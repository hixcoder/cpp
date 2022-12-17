/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 10:40:54 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/17 12:57:09 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

Point::Point()
{
    x = Fixed(0);
    y = Fixed(0);
}

Point::Point(const float X, const float Y)
{
    x = Fixed(X);
    y = Fixed(Y);
}

Point::Point(const Point &other)
{
     this->x = other.x;   
     this->y = other.y;   
}

Point::~Point()
{
    
}

Point& Point::operator=(const Point &rhs)
{
    this->x = rhs.x;
    this->y = rhs.y;
    return *this;
}

float Point::getX() const
{
    return (this->x.toFloat());
}

float Point::getY() const
{
    return (this->y.toFloat());
}
