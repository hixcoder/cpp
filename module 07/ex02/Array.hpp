/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:51:48 by hboumahd          #+#    #+#             */
/*   Updated: 2023/01/15 12:06:59 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>

template<typename T>
class Array
{
private:
    T *array;
    unsigned int n;

public:
    class IndexOutOfBound: public std::exception
    {
        public:
            virtual const char* what() const throw() { return "IndexOutOfBound"; }
    };

    Array()
    {
        this->array = new T[0];
        this->n = 0;
    }

    Array(unsigned int n)
    {
        this->array = new T[n];
        this->n = n;
    }

    Array &operator=(const Array &other)
    {
        for (unsigned int i = 0; i < other.size() && i < this->n ; i++)
        {
            this->array[i] = other.array[i];
        }
        return *this;
    }
   
    Array(const Array &other)
    {
        this->n = other.n;
        this->array = new T[n];
        *this = other;
    }

    ~Array()
    {
        delete[] this->array;
    }

    T &operator[](const int index)
    {
        unsigned int index2;
        if (index < 0)
            throw IndexOutOfBound();
        else
            index2 = static_cast<unsigned int> (index);
        if (index2 >= this->size())
            throw IndexOutOfBound(); 
        return this->array[index];
    }

    unsigned int size() const
    {
        return n;
    }
};