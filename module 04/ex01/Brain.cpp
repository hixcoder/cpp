/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:10:32 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/20 13:30:17 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

Brain::Brain()
{
    for (size_t i = 0; i < ideas->length(); i++)
       this->ideas[i] = "nothing";
    std::cout << "Brain constructor called\n";
}

Brain::Brain(const Brain &other)
{
    *this = other;
    std::cout << "Brain constructor called\n";
}

Brain& Brain::operator=(const Brain &other)
{
    for (size_t i = 0; i < other.ideas->length(); i++)
       this->ideas[i] = other.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called\n";
}