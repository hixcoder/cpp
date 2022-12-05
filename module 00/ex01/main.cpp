/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:10:50 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/05 15:46:06 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

Contact AddContact()
{
    
}

int main()
{
    std::string command;
    PhoneBook   phoneBook;
    
    std::cout << "=======> Open My Awesome PhoneBook <=======\n\n";
    while (1)
    {
        std::cout << "Please enter a command: [ADD, SEARCH, EXIT]\n";
        std::getline(std::cin, command);
        if (command.compare("ADD") == 0)
            phoneBook.AddContact();
        else if (command.compare("SEARCH") == 0)
            phoneBook.SearchContact();
        else if (command.compare("EXIT") == 0)
            break;
    }
    std::cout << "\n=======> Close My Awesome PhoneBook <=======\n";
}