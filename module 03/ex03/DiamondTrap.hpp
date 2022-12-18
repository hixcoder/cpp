/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:20:02 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/18 18:37:16 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap , public ScavTrap
{
private:
    std::string clap_name;
public:
    DiamondTrap();
    DiamondTrap(std::string Name);
    DiamondTrap(DiamondTrap &other);
    ~DiamondTrap();
    DiamondTrap& operator=(DiamondTrap &other);

    void whoAmI();
    using ScavTrap::attack;
    std::string getClap_name();
    void setClap_name(std::string clap_name);
};
