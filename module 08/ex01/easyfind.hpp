/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
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
# include <vector>

template<typename T>
typename T::iterator easyfind(T container, int v)
{
    typename T::iterator it;
    for (it = container.begin(); it != container.end(); it++)
    {
        if (*it == v)
            return (it);
    }
    throw std::invalid_argument("didntFindTheValue");
    
}