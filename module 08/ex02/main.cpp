/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2023/01/20 19:03:42 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    std::cout << "==> MutantStack result:\n";
    std::cout << "=======================\n";
    {
        MutantStack<int> mstack;
        
        // modifiers
        mstack.push(5);
        mstack.push(17);
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        // mstack.pop();
        
        // iterators
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        
        // print results
        std::cout << "last element: " << mstack.top() << std::endl;
        std::cout << "size : " << mstack.size() << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
        
    }
    std::cout << "==> list result:\n";
    std::cout << "================\n";

    {
        std::list<int> mlist;
        
        // modifiers
        mlist.push_back(5);
        mlist.push_back(17);
        mlist.push_back(3);
        mlist.push_back(5);
        mlist.push_back(737);
        mlist.push_back(0);
        
        // mlist.pop_back();
        
        // iterators
        std::list<int>::iterator it = mlist.begin();
        std::list<int>::iterator ite = mlist.end();
        
        // print results
        std::cout << "last element: " << mlist.back() << std::endl;
        std::cout << "size : " << mlist.size() << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    return 0;
}

