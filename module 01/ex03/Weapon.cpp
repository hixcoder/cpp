/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:45:54 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/08 15:59:35 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MyHeader.hpp"

// public functions definitions
void    Weapon::setType(std::string Type){type = Type;}
std::string Weapon::getType(){return type;}
