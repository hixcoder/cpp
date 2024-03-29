/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:03:17 by hboumahd          #+#    #+#             */
/*   Updated: 2023/01/18 14:47:25 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->n = 0;
    this->stillPlace = 0;
}

Span::Span(const Span &other)
{
    this->n = other.n;
    this->stillPlace = 0;
    *this = other;
}

Span::Span(unsigned int N)
{
    this->n = N;
    this->stillPlace = 0;
}

Span::~Span()
{
}

Span& Span::operator=(const Span &other)
{
    for (unsigned int i = 0; i < other.size() && i < this->n ; i++)
    {
        this->span.push_back(other.span[i]);
    }
    return *this;
}


void Span::addNumber(int nbr)
{
    int index;

    if (this->stillPlace < this->n)
    {
        index = this->stillPlace;
        this->span.push_back(nbr);
        stillPlace++;
    }
    else
        throw NoPlaceLeft();
}

int Span::shortestSpan()const
{
    int shSpan;
    std::vector<int> tmp;
    int cmp;

    if (this->n <= 1 || this->stillPlace <= 1)
        throw NotEnoughtNumbersStored();
    tmp = this->span;
    shSpan = INT_MAX;
    for (size_t i = 0; i < this->stillPlace; i++)
    {
        for (size_t j = i + 1; j < this->stillPlace; j++)
        {
            cmp = tmp[i] - tmp[j];
            if (cmp < 0)
                cmp *= -1;
            if (cmp < shSpan)
                shSpan = cmp;
        }        
    }
    return shSpan;
}

int Span::longestSpan()const
{
    int loSpan;
    int tmp[this->stillPlace];

    if (this->n <= 1 || this->stillPlace <= 1)
        throw NotEnoughtNumbersStored();
    for (size_t i = 0; i < this->stillPlace; i++)
        tmp[i] = this->span[i];
    std::sort(tmp, tmp + (this->stillPlace));
    loSpan = tmp[this->stillPlace - 1] - tmp[0];
    return loSpan;
}

void Span::fillSpan(size_t N)
{
    srand(time(NULL));
    for (size_t i = 0; i < this->size() && i < N; i++)
        this->addNumber(rand() % 1000);
}

unsigned int Span::size()const
{
    return this->n;
}

unsigned int Span::lenght()const
{
    return this->stillPlace;
}

std::vector<int> Span::getSpan() const
{
    return this->span;
}