/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:22:56 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/14 12:37:48 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N < 0)
        return NULL;
    Zombie *zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombie[i].SetName(name);
    return zombie;
}
