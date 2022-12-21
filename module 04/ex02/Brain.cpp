/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:10:32 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/21 11:19:32 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

Brain::Brain()
{
    for (int i = 0; i < this->getLenght(); i++)
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
    for (int i = 0; i < this->getLenght(); i++)
       this->ideas[i] = other.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called\n";
}

const std::string Brain::getIdeas(int i) const
{
    return this->ideas[i];
}
void Brain::setIdeas(int i, std::string idea)
{
    this->ideas[i] = idea;
}

int Brain::getLenght() const
{
    int size = sizeof(this->ideas) / sizeof(this->ideas[0]);
    return size;
}