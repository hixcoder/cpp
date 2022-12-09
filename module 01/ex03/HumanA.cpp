/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:43:48 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/09 10:28:22 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MyHeader.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon)
{
    Myname = name;
    myWeapon = &weapon;
}

void HumanA::attack()
{
    std::cout << Myname << " attack with their " << myWeapon->getType() << "\n";
}