/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:10:50 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/08 14:56:25 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    int N = 10;
    
    Zombie *z2 = zombieHorde(N, "vanos Hord");
    for (int i = 0; i < N; i++)
        z2[i].announce();
    delete []z2;
}