/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 10:44:17 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/18 16:52:29 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

ClapTrap::ClapTrap(std::string Name)
{
    this->name = Name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "Constructor of the ClapTrap " << this->name << " is called\n";
}

ClapTrap::ClapTrap(ClapTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
}

ClapTrap& ClapTrap::operator=(ClapTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor of the ClapTrap " << this->name << " is called\n";
}


void ClapTrap::attack(const std::string& target)
{
    if (this->hitPoints <= 0)
        std::cout << "ClapTrap " << this->name << " died!  :[\n";
    else if (this->energyPoints <= 0)
        std::cout << "you have 0 energyPoints!\n";
    else
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target 
                  << ", causing " << this->attackDamage << " points of damage!\n";
        this->energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " takes " 
                  << amount << " points of damage!\n";
        this->hitPoints -= amount;
    }
    else
        std::cout << "ClapTrap " << this->name << " died!  :[\n";
    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints <= 0)
        std::cout << "ClapTrap " << this->name << " died!  :[\n";
    else if (this->energyPoints <= 0)
        std::cout << "you have 0 energyPoints!\n";
    else
    {
        std::cout << "ClapTrap " << this->name 
                  << " repaired with " << amount << " hitPoints\n";
        this->hitPoints += amount;
        this->energyPoints--;
    }
}


/*******************************************************************************\
*                               getters and setters                          
\*******************************************************************************/


std::string ClapTrap::getName()
{
    return this->name;
}
void ClapTrap::setName(std::string name)
{
    this->name = name;
}
int ClapTrap::getHitPoints()
{
    return this->hitPoints;
}
void ClapTrap::setHitPoints(int hitPoints)
{
    this->hitPoints = hitPoints;
}
int ClapTrap::getEnergyPoints()
{
    return this->energyPoints;
}
void ClapTrap::setEnergyPoints(int energyPoints)
{
    this->energyPoints = energyPoints;
}
int ClapTrap::getAttackDamage()
{
    return this->attackDamage;
}
void ClapTrap::setAttackDamage(int attackDamage)
{
    this->attackDamage = attackDamage;
}