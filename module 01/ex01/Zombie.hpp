/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:17:56 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/08 14:54:31 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

# include <iostream>
# include <string>
# include <string.h>

class Zombie
{
private:
    std::string name;

public:
    Zombie();
    ~Zombie();
    
    void SetName(std::string Name);
    void announce( void );
};

Zombie* zombieHorde(int N, std::string name);
