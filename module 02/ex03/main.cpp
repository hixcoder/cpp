/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:12:27 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/17 16:58:43 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "MyHeader.hpp"


int main( void ) {

    Point a = Point(0, 0);
    Point b = Point(0, 5);
    Point c = Point(5, 0);
    Point p = Point(5, 0);

    std::cout << "a(x: " << a.getX() << ", y: " << a.getY() << ")\n";
    std::cout << "b(x: " << b.getX() << ", y: " << b.getY() << ")\n";
    std::cout << "c(x: " << c.getX() << ", y: " << c.getY() << ")\n\n";
    
    std::cout << "p(x: " << p.getX() << ", y: " << p.getY() << ")\n\n";
    bool isInside = bsp(a, b, c, p);
    std::cout << "the point is inside: " << isInside << "\n";
    return 0;
}