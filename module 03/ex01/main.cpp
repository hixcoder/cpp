/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:12:27 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/18 12:54:01 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "MyHeader.hpp"

void printStatus(ScavTrap *s)
{
    std::cout << "=======================\n";
    std::cout << "* name: " << s->getName() << "\n";
    std::cout << "* hp  : " << s->getHitPoints() << "\n";
    std::cout << "* mp  : " << s->getEnergyPoints() << "\n";
    std::cout << "* attk: " << s->getAttackDamage() << "\n";
    std::cout << "=======================\n";
}

int main( void ) {
    ScavTrap s1("robo12");
    // ScavTrap s2("robot999");

    // s2.setAttackDamage(500);
    // ScavTrap s3(s2);
    // s1 = s2;
    
    // printStatus(&s3);
    printStatus(&s1);
    s1.attack("devel");
    s1.takeDamage(2);
    s1.beRepaired(1);
    s1.setAttackDamage(5);
    // for (int i = 0; i < 10; i++)
    // {
    //     s1.attack("devel");
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     s1.attack("devel");
    // }
    s1.guardGate();
    return 0;
}
