/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:20:43 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/08 11:51:43 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MyHeader.hpp"

class Contact
{
private:
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;

public:
    void    SetFirstName(std::string firstName);
    std::string    GetFirstName();

    void    SetLastName(std::string lastName);
    std::string    GetLastName();

    void    SetNickName(std::string nickName);
    std::string    GetNickName();

    void    SetPhoneNumber(std::string phoneNumber);
    std::string    GetPhoneNumber();
    
    void    SetDarkestSecret(std::string darkestSecret);
    std::string    GetDarkestSecret();

};