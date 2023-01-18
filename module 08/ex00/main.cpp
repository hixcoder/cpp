/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2023/01/18 15:41:40 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {

    std::vector<int> myVector;
    std::vector<int>::iterator it;
    srand(time(NULL));
    
    myVector.push_back(rand() % 100);
    myVector.push_back(510);
    myVector.push_back(150);
    myVector.push_back(250);
    
    int i = -1;
    for (it = myVector.begin(); it != myVector.end(); it++)
    {
        std::cout << "myvector[" << ++i << "] = " << *it << "\n";
    }
    
    // here we try to find the int
    try
    {
        int searched = 511;
        easyfind(myVector, searched);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}