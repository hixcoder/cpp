/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:09:38 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/19 11:18:22 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

ScavTrap::ScavTrap()
{
    this->name = "ScavTrap0";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "Constructor of the ScavTrap " << this->name << " is called\n";
}

ScavTrap::ScavTrap(ScavTrap &other)
{
    *this = other;
}

ScavTrap::ScavTrap(std::string Name)
{
    this->name = Name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "Constructor of the ScavTrap " << this->name << " is called\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor of the ScavTrap " << this->name << " is called\n";
}

ScavTrap& ScavTrap::operator=(ScavTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->hitPoints <= 0)
        std::cout << this->name << " died!  :[\n";
    else if (this->energyPoints <= 0)
        std::cout << this->name << " have 0 energyPoints!\n";
    else
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target 
                  << ", causing " << this->attackDamage << " points of damage!\n";
        this->energyPoints--;
    }
}

void ScavTrap::guardGate()
{
    std::cout << this->name << " is now in Gate keeper mode!\n";
}