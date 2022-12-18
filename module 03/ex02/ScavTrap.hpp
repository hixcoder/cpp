/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:09:35 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/18 16:05:30 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <string>
#include "ClapTrap.hpp"


class ScavTrap: public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string Name);
    ScavTrap(ScavTrap &other);
    ~ScavTrap();
    
    ScavTrap& operator=(ScavTrap &other);
    void attack(const std::string& target);
    void guardGate();
};