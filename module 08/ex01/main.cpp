/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2023/01/20 20:53:44 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        unsigned int N = 5;
        Span sp(N);
        sp.addNumber(-31);
        sp.addNumber(1);
        sp.addNumber(31);
        // sp.fillSpan(N);
        
        std::vector<int> span1 = sp.getSpan();
        for (size_t i = 0; i < sp.lenght(); i++)
        {
            std::cout << "span1[" << i << "]= " << span1[i] << "\n"; 
        }
        
        std::cout << "\nshortestSpan: " << sp.shortestSpan() << std::endl;
        std::cout << "longestSpan : " << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}