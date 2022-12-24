/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:35:45 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/24 15:47:38 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

// ------------------------------------------
//                 constructors
// ------------------------------------------

PresidentialPardonForm::PresidentialPardonForm() 
{
  
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
    *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    (void) other;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

// ------------------------------------------
//                functions
// ------------------------------------------

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    (void) executor;
}