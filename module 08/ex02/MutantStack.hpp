/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:43:26 by hboumahd          #+#    #+#             */
/*   Updated: 2023/01/20 19:02:14 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

# include <iostream>
# include <string>
# include <algorithm>
# include <climits>
#include <stack>
#include <list>
#include <deque>

template <class T, class Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
public:
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;

public:
    MutantStack(): std::stack<T, Container>(){}
    MutantStack(const MutantStack &other): std::stack<T, Container>(other){}
    ~MutantStack(){}

    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
    const_iterator cbegin()
    {
        return this->c.cbegin();
    }
    const_iterator cend()
    {
        return this->c.cend();
    }
};

