/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:19:57 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/18 18:24:53 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

DiamondTrap::DiamondTrap()
{
    this->name = "DiamondTrap0";
    this->clap_name = ClapTrap::name;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "Constructor of the DiamondTrap is called\n";
}

DiamondTrap::DiamondTrap(std::string Name)
{
    this->name = Name;
    this->clap_name = Name + "_clap_name";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "Constructor of the DiamondTrap is called\n";
}

DiamondTrap::DiamondTrap(DiamondTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor of the DiamondTrap is called\n";
}

void DiamondTrap::whoAmI()
{
    std::cout << "=====================================\n";
    std::cout << "my name is: " << this->name << "\n";
    std::cout << "my ClapTrap name is: " << this->clap_name << "\n";
    std::cout << "=====================================\n";
}

/*******************************************************************************\
*                               getters and setters                          
\*******************************************************************************/


std::string DiamondTrap::getClap_name()
{
    return this->clap_name;
}
void DiamondTrap::setClap_name(std::string clap_name)
{
    this->clap_name = clap_name;
}