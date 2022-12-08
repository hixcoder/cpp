/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:43:54 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/08 12:56:34 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

// constructor definition
Zombie::Zombie(std::string Name)
{
    name = Name;
}

// constructor definition
Zombie::~Zombie()
{
    std::cout << name << " is destroyed\n";
}

// private functions definitions


// public functions definitions
void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}


