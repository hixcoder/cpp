/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:10:50 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/06 15:40:51 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"


void GetValue(std::string s, std::string& value)
{
    std::cout << "Enter " << s << ":" << "\n";
    getline(std::cin, value);
    if (value[0] == '\0')
        GetValue(s, value);
}

void CreateContact(Contact& contact)
{
    std::string value;
    
    GetValue("First Name", value);
    contact.SetFirstName(value);
    GetValue("Last Name", value);
    contact.SetLastName(value);
    GetValue("Nick Name", value);
    contact.SetNickName(value);
    GetValue("Phone Number", value);
    contact.SetPhoneNumber(value);
    GetValue("Darkest Secret", value);
    contact.SetDarkestSecret(value);
}

int main()
{
    std::string command;
    PhoneBook   phoneBook;
    Contact   contact;
    int i;
    int len;
    
    std::cout << "=======> Open My Awesome PhoneBook <=======\n\n";
    i = 0;
    len = 0;
    while (1)
    {
        std::cout << "Please enter a command: [ADD, SEARCH, EXIT]\n";
        getline(std::cin, command);
        if (command.compare("ADD") == 0)
        {
            CreateContact(contact);
            len++;
            if (i == 8)
                i = 0;
            phoneBook.AddContact(contact, i);
            i++;
        }
        else if (command.compare("SEARCH") == 0)
            phoneBook.SearchContact(len);
        else if (command.compare("EXIT") == 0)
            break;
    }
    std::cout << "\n=======> Close My Awesome PhoneBook <=======\n";
}