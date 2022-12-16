/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:43:54 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/16 16:08:57 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MyHeader.hpp"


// private functions definitions
void    PhoneBook::DisplayInfo(std::string s)
{
    int sLen;
    int startS;
    sLen = s.length();
    startS = 10 - sLen;
    if (sLen >= 10)
    {
        for (int i = 0; i < 10; i++)
        {
            if (i == 9)
                std::cout << ".";
            else
                std::cout << s[i];
        }
    }
    else
    {
        for (int i = 0; i < startS; i++)
                std::cout << " ";
        for (int i = 0; i < sLen; i++)
                std::cout << s[i];
    }
}

void    PhoneBook::DisplayALLContacts(int len)
{
    std::cout << "\n";
    for (int i = 0; i < len; i++)
    {
        std::cout << "        " << i + 1 << "|";
        DisplayInfo(Contacts[i].GetFirstName());
        std::cout << "|";
        DisplayInfo(Contacts[i].GetLastName());
        std::cout << "|";
        DisplayInfo(Contacts[i].GetNickName());
        std::cout << "\n";
    }
}

void    PhoneBook::DisplayOneContactInfo(int i)
{
    std::cout << "\n";
    std::cout << "First name    : " << Contacts[i].GetFirstName() << "\n";
    std::cout << "Last name     : " << Contacts[i].GetLastName() << "\n";
    std::cout << "Nick name     : " << Contacts[i].GetNickName() << "\n";
    std::cout << "Phone number  : " << Contacts[i].GetPhoneNumber() << "\n";
    std::cout << "Darkest Secret: " << Contacts[i].GetDarkestSecret() << "\n\n";
}


// public functions definitions
void PhoneBook::AddContact(Contact contact, int i)
{
    Contacts[i] = contact;
    std::cout << "==> You create a new contact!\n";
}

void    PhoneBook::SearchContact(int t_len)
{
    std::string index;
    int i;
    int len;
    
    if (t_len > 8)
        len = 8;
    else
        len = t_len;
    DisplayALLContacts(len);
    if (len == 0)
        std::cout << "\n==> You have 0 contacts!\n";
    else
    {
        std::cout << "\nEnter contact index: ";
        i = 10;
        getline(std::cin, index);
        if (index.length() == 1 && index[0] <= '9' && index[0] >= '0')
            i = stoi(index) - 1;
        if (i < len)
            DisplayOneContactInfo(i);
    }
}
