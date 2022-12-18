/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:56:45 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/18 18:37:24 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
    FragTrap(std::string Name);
    FragTrap();
    FragTrap(FragTrap &other);
    ~FragTrap();
    
    FragTrap& operator=(FragTrap &other);
    void attack(const std::string& target);
    void highFivesGuys(void);
};