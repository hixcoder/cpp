/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:17:35 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/10 15:52:08 by hboumahd         ###   ########.fr       */
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
    void(Harl::*fPtr)();

    fPtr = &Harl::debug;
    fPtr = (level == "INFO") ? &Harl::info : fPtr;
    fPtr = (level == "WARNING") ? &Harl::warning : fPtr;
    fPtr = (level == "ERROR") ? &Harl::error : fPtr;
    fPtr2 = fPtr;
}