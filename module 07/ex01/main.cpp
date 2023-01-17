/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2023/01/17 13:48:34 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void init(int &element)
{
    element = 0;
}

void print(int &element)
{
    std::cout << element << " ";
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
    std::cout << "\n";   
    iter(array, len, addOne);     
    iter(array, len, print);     
    std::cout << "\n";   
    return 0;
}