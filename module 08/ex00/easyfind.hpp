/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:03:17 by hboumahd          #+#    #+#             */
/*   Updated: 2023/01/20 19:51:11 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <vector>
#include <algorithm>

template<typename T>
void easyfind(T container, int v)
{
    typename T::iterator it;
    if (std::find(container.begin(), container.end(), v) != container.end())
    {
        std::cout << "==> ✅ ValueFounded\n"; 
        return ;
    }
    throw std::invalid_argument("==> ❌didntFindTheValue");
}