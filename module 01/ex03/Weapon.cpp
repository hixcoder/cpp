/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:45:54 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/09 09:45:09 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MyHeader.hpp"

// constructors definition
Weapon::Weapon(){}
Weapon::Weapon(const std::string Type)
{
    type = Type;
}


// public functions definitions
void    Weapon::setType(std::string Type){type = Type;}
std::string Weapon::getType(){return type;}
