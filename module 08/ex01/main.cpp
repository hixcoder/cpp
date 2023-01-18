/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2023/01/18 14:49:59 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void ) {

    std::vector<int> myVector;
    std::vector<int>::iterator it;
    
    myVector.push_back(50);
    myVector.push_back(510);
    myVector.push_back(150);
    myVector.push_back(250);
    
    // int i = -1;
    //     myVector.pop_back();
    // for (it = myVector.begin(); it != myVector.end(); it++)
    // {
    //     std::cout << "myvector[" << ++i << "] = " << *it << "\n";
    // }
    
    try
    {
        std::vector<int>::iterator it = easyfind(myVector, 552);
        std::cout << "this is the found value: " << *it << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}