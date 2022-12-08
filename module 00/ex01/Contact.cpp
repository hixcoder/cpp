/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:20:43 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/08 11:52:22 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

// public functions definitions
void    Contact::SetFirstName(std::string firstName){FirstName = firstName;}
std::string    Contact::GetFirstName(){return (FirstName);}

void    Contact::SetLastName(std::string lastName){LastName = lastName;}
std::string    Contact::GetLastName(){return (LastName);}

void    Contact::SetNickName(std::string nickName){NickName = nickName;}
std::string    Contact::GetNickName(){return (NickName);}

void    Contact::SetPhoneNumber(std::string phoneNumber){PhoneNumber = phoneNumber;}
std::string    Contact::GetPhoneNumber(){return (PhoneNumber);}

void    Contact::SetDarkestSecret(std::string darkestSecret){DarkestSecret = darkestSecret;}
std::string    Contact::GetDarkestSecret(){return (DarkestSecret);}

