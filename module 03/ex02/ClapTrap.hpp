/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 10:44:14 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/20 12:30:13 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;


public:
    ClapTrap();
    ClapTrap(std::string Name);
    ClapTrap(ClapTrap &other);
    ~ClapTrap();
    ClapTrap& operator=(ClapTrap &other);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName();
    void setName(std::string name);
    int getHitPoints() ;
    void setHitPoints(int hitPoints);
    int getEnergyPoints();
    void setEnergyPoints(int energyPoints);
    int getAttackDamage();
    void setAttackDamage(int attackDamage);
};


