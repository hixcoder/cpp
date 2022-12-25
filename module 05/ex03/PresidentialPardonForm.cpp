/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:34:45 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/25 15:28:52 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

// ------------------------------------------
//                 constructors
// ------------------------------------------

PresidentialPardonForm::PresidentialPardonForm() 
    :AForm("PresidentialPardonForm", 25, 5)
{
  this->target = "unknown";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    :AForm("PresidentialPardonForm", 25, 5) 
{
  this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
    *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    this->target = other.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

// ------------------------------------------
//                functions
// ------------------------------------------

void PresidentialPardonForm::executeMyForm() const
{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox.\n";
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIsSigned())
        throw FormIsNotSigned();
    else if (this->getRequiredGradeToExecute() < executor.getGrade())
        throw GradeTooLowException();
    else
        this->executeMyForm();
}
