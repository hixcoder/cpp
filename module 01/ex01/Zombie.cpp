/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:43:54 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/08 14:48:25 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

// constructors definition
Zombie::Zombie(){}

// constructors definition
Zombie::~Zombie()
{
    std::cout << name << " is destroyed\n";
}


// private functions definitions

// public functions definitions
void Zombie::SetName(std::string Name)
{
    name = Name;
}
    
void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}


