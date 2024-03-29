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
# include <vector>

class Span
{
private:
    std::vector<int> span;
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

    Span();
    Span(const Span &other);
    Span(unsigned int N);
    ~Span();
    Span &operator=(const Span &other);

    void addNumber(int nbr);
    void fillSpan(size_t N);
    int shortestSpan()const;
    int longestSpan()const;
    unsigned int size() const;
    unsigned int lenght() const;
    std::vector<int> getSpan() const;
};

