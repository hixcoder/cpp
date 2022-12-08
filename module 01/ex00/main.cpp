/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:10:50 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/08 13:31:06 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    Zombie z1("zangaZanga");
    Zombie *z2 = newZombie("hibaz");
    z1.announce();
    z2->announce();
    randomChump("giga");
    delete z2;
}