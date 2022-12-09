/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:43:01 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/09 10:36:59 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
class Weapon
{
private:
    std::string type;

public:
    Weapon();
    Weapon(const std::string Type);
    
    void setType(std::string Type);
    std::string getType();

};