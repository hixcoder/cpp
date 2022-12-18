/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:56:07 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/18 16:52:29 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

FragTrap::FragTrap()
{
    this->name = "FragTrap0";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "Constructor of the ScavTrap " << this->name << " is called\n";
}

FragTrap::FragTrap(std::string Name)
{
    this->name = Name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "Constructor of the FragTrap " << this->name << " is called\n";
}

FragTrap::FragTrap(FragTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor of the FragTrap " << this->name << " is called\n";
}

FragTrap& FragTrap::operator=(FragTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    if (this->hitPoints <= 0)
        std::cout << this->name << " died!  :[\n";
    else if (this->energyPoints <= 0)
        std::cout << this->name << " have 0 energyPoints!\n";
    else
    {
        std::cout << "FragTrap " << this->name << " attacks " << target 
                  << ", causing " << this->attackDamage << " points of damage!\n";
        this->energyPoints--;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Hey my name is " << this->name << ", can I get a high five? :)" << std::endl;
}