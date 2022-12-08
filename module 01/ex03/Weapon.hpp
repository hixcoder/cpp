/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:43:01 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/08 15:57:42 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "MyHeader.hpp"

class Weapon
{
private:
    std::string type;

public:
    void setType(std::string Type);
    std::string getType();

};