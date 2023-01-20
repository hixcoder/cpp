/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:03:17 by hboumahd          #+#    #+#             */
/*   Updated: 2023/01/18 14:47:25 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <algorithm>
# include <climits>

class MutantStack
{
private:
    int *span;
    unsigned int n;
    unsigned int stillPlace;

public:
    class NoPlaceLeft: public std::exception
    {
        public:
            virtual const char* what() const throw() { return "NoPlaceLeft"; }
    };
    class NotEnoughtNumbersStored: public std::exception
    {
        public:
            virtual const char* what() const throw() { return "NotEnoughtNumbersStored"; }
    };

    MutantStack();
    MutantStack(const MutantStack &other);
    MutantStack(unsigned int N);
    ~MutantStack();
    MutantStack &operator=(const MutantStack &other);

    void addNumber(int nbr);
    void fillSpan(size_t N);
    int shortestSpan()const;
    int longestSpan()const;
    unsigned int size() const;
    int *getSpan() const;
};

