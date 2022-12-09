/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:43:50 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/09 10:47:23 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
private:
    Weapon *myWeapon;
    std::string Myname;

public:
    HumanB(const std::string name);
    
    void attack();
    void setWeapon(Weapon &weapon);
};