/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:43:48 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/09 10:27:32 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
private:
    Weapon *myWeapon;
    std::string Myname;

public:
    HumanA(const std::string name, Weapon &weapon);
    void attack();
};