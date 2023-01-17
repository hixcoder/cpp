/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                       :+:      :+:    :+:   */
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
void iter(T *array, int len, void (*func)(T &element))
{
    for (int i = 0; i < len; i++)
        func(array[i]);
}
