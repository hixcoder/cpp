/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 09:58:39 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/20 14:59:05 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

int main()
{
    size_t len = 4;
    Animal *a = new Animal[len];
    for (size_t i = 0; i < len; i++)
    {
        if (i < (len / 2))
            a[i] = Dog();
        else
            a[i] = Cat();
    }
    delete[] a;
    return 0;
}