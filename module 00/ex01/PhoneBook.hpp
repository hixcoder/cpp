/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:11:14 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/05 15:37:15 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "MyHeader.hpp"


class PhoneBook
{
private:
    static int i;
    Contact  Contacts[8];

public:
    PhoneBook()
    {
        i = 0;
    }
    void AddContact(Contact contact)
    {
        Contacts[i] = contact;
        i++;
        std::cout << "AddContact\n";
    }

    void    SearchContact()
    {
        std::cout << "SearchContact\n";
    }
};