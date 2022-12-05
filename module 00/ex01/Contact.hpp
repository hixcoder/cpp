/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:20:43 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/05 15:34:19 by hboumahd         ###   ########.fr       */
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
    void    SetFirstName(std::string firstName){FirstName = firstName;}
    std::string    GetFirstName(){return (FirstName);}

    void    SetLastName(std::string lastName){LastName = lastName;}
    std::string    GetLastName(){return (LastName);}

    void    SetNickName(std::string nickName){NickName = nickName;}
    std::string    GetNickName(){return (NickName);}

    void    SetPhoneNumber(std::string phoneNumber){PhoneNumber = phoneNumber;}
    std::string    GetPhoneNumber(){return (PhoneNumber);}
    
    void    SetDarkestSecret(std::string darkestSecret){DarkestSecret = darkestSecret;}
    std::string    GetDarkestSecret(){return (DarkestSecret);}

};