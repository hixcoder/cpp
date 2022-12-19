/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:19:57 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/19 12:28:30 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

DiamondTrap::DiamondTrap()
{
    this->name = "DiamondTrap0";
    ClapTrap::name = name + "_clap_name";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
    std::cout << "Constructor of the DiamondTrap is called\n";
}

DiamondTrap::DiamondTrap(std::string Name)
{
    this->name = Name;
    ClapTrap::name = name + "_clap_name";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 30;
    std::cout << "Constructor of the DiamondTrap is called\n";
}

DiamondTrap::DiamondTrap(DiamondTrap &other)
{
    (*this) = other;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap &other)
{
    this->name = other.name;
    ClapTrap::name = name + "_clap_name";
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
    std::cout << "my ClapTrap name is: " << ClapTrap::name  << "\n";
    std::cout << "=====================================\n";
}

/*******************************************************************************\
*                               getters and setters                          
\*******************************************************************************/


std::string DiamondTrap::getName2()
{
    return this->name;
}
void DiamondTrap::setName2(std::string name)
{
    this->name = name;
}