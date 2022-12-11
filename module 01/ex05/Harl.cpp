/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:17:35 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/11 12:45:40 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MyHeader.hpp"


void Harl::debug()
{
    std::cout << "DEBUG: "
              << "Harl says this is not good..." << "\n";
}

void Harl::info()
{
    std::cout << "INFO: "
              << "Harl says this is not helpfull..." << "\n";
}

void Harl::warning()
{
    std::cout << "WARNING: "
              << "Harl warn you my friend don't do it again..." << "\n";
}

void Harl::error()
{
    std::cout << "ERROR: "
              << "Harl says you are a bad person and he wants to fight you..." << "\n";
}
    
void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    fPtr[0] = &Harl::debug;
    fPtr[1] = &Harl::info;
    fPtr[2] = &Harl::warning;
    fPtr[3] = &Harl::error;
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
            (this->*fPtr[i])();
    }
    
}