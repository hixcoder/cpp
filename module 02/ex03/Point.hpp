/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 10:40:58 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/17 16:27:25 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "Fixed.hpp"

class Point
{
private:
    Fixed x;
    Fixed y;

public:
    Point();
    Point(const float X, const float Y);
    Point(const Point &other);
    ~Point();
    
    Point& operator=(const Point &rhs);
    float getX() const;
    float getY() const;
    bool operator==(const Point &rhs) const;
};