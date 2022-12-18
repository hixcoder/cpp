/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:12:27 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/18 13:15:05 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "MyHeader.hpp"

void printStatus(FragTrap *s)
{
    std::cout << "=======================\n";
    std::cout << "* name: " << s->getName() << "\n";
    std::cout << "* hp  : " << s->getHitPoints() << "\n";
    std::cout << "* mp  : " << s->getEnergyPoints() << "\n";
    std::cout << "* attk: " << s->getAttackDamage() << "\n";
    std::cout << "=======================\n";
}

int main( void ) {
    FragTrap s1("robo12");

    printStatus(&s1);
    s1.attack("sonic");
    s1.takeDamage(2);
    s1.beRepaired(1);
    s1.setAttackDamage(5);
    s1.highFivesGuys();
    return 0;
}
