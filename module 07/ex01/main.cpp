/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2023/01/15 12:30:04 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void iter(T *array, int len, void (*func)(T &element))
{
    for (int i = 0; i < len; i++)
        func(array[i]);
}

void init(int &element)
{
    element = 0;
}

void print(int &element)
{
    std::cout << element << "\n";
}

void addOne(int &element)
{
    element++;
}



int main() 
{
    int len = 10;
    int array[len];
    iter(array, len, init);     
    iter(array, len, print);     
    iter(array, len, addOne);     
    iter(array, len, print);     
    return 0;
}