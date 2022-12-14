/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 10:40:45 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/17 16:29:59 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

// here I use the "Shoelace Theorem" for calculate the area of triangle
float area(Point const p1, Point const p2, Point const p3)
{
    float area = (p1.getX() * (p2.getY()-p3.getY()) + p2.getX()*(p3.getY()-p1.getY())+ p3.getX()*(p1.getY()-p2.getY())) / (2.0);
    if (area < 0)
        area *= -1;
    return area;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float A = area(a, b, c);
    float a1 = area(point, b, c);
    float a2 = area(a, point, c);
    float a3 = area(a, b, point);
    
    // for check if the point on the edge of the triangle
    if (a1 == 0 || a2 == 0 || a3 == 0)
        return false;
    // for check if the point is a vertex of the triangle
    if (point == a || point == b || point == c)
        return false;
        
    float total = a1 + a2 + a3;
    if (total == A)
        return true;
    return false;
}
