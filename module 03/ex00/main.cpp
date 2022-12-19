/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:12:27 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/19 12:55:27 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "MyHeader.hpp"

int main( void ) {
    ClapTrap c1("robo12");

    c1.attack("devel");
    c1.takeDamage(5);
    c1.takeDamage(20);
    c1.beRepaired(1);
    c1.setAttackDamage(5);
    for (int i = 0; i < 10; i++)
    {
        c1.attack("devel");
    }
    for (int i = 0; i < 10; i++)
    {
        c1.beRepaired(1);
    }
    return 0;
}
