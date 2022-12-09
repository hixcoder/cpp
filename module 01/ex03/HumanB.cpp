/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:43:50 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/09 10:47:41 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MyHeader.hpp"

HumanB::HumanB(const std::string name)
{
    Myname = name;
}

void HumanB::attack()
{
    std::cout << Myname << " attack with their " << myWeapon->getType() << "\n";
}

void HumanB::setWeapon(Weapon &weapon){myWeapon = &weapon;}