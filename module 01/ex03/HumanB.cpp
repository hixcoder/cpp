/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:43:50 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/09 12:25:35 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MyHeader.hpp"

HumanB::HumanB(const std::string name)
{
    Myname = name;
}

void HumanB::attack()
{
    std::cout << Myname << " attack with their ";
    if (myWeapon)
        std::cout << myWeapon->getType();
    else
        std::cout << " hands :}";
    std::cout << "\n";
}

void HumanB::setWeapon(Weapon &weapon){myWeapon = &weapon;}