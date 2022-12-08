/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:17:56 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/08 11:48:52 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# pragma once
# include "MyHeader.hpp"


class PhoneBook
{
private:
    Contact  Contacts[8];

private:
    void    DisplayInfo(std::string s);
    void    DisplayALLContacts(int len);
    void    DisplayOneContactInfo(int i);
    
public:
    void    AddContact(Contact contact, int i);
    void    SearchContact(int t_len);
};