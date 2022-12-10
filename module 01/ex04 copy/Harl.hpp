/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:17:38 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/10 15:52:45 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Harl
{
private:
public:
    void(*fPtr2)();
    void complain(std::string level);

private:
    void debug();
    void info();
    void warning();
    void error();
};
