/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:17:38 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/11 12:33:47 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Harl
{
private:
    void(Harl::*fPtr[4])();
    
public:
    void complain(std::string level);

private:
    void debug();
    void info();
    void warning();
    void error();
};
