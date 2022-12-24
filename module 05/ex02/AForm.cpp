/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:50:28 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/24 14:28:02 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

// ------------------------------------------
//                 constructors
// ------------------------------------------

AForm::AForm() : name("unknown"), requiredGradeToSign(50), requiredGradeToExecute(50)
{
    this->isSigned = false;
}

AForm::AForm(const std::string Name, const int RequiredGradeToSign, const int RequiredGradeToExecute)
    :name(Name), requiredGradeToSign(RequiredGradeToSign), requiredGradeToExecute(RequiredGradeToExecute)
{
    if (this->requiredGradeToSign > 150 || this->requiredGradeToExecute > 150) {
        throw GradeTooLowException();
    } else if (this->requiredGradeToSign < 1 || this->requiredGradeToExecute < 1) {
        throw GradeTooHighException();
    }
    this->isSigned = false;
}

AForm::AForm(const AForm &other)
    :name(other.name), requiredGradeToSign(other.requiredGradeToSign), requiredGradeToExecute(other.requiredGradeToExecute)
{
    *this = other;
}

AForm& AForm::operator=(const AForm &other)
{
    this->isSigned = other.isSigned;
    return (*this);
}

AForm::~AForm()
{
}

// ------------------------------------------
//                functions
// ------------------------------------------

void AForm::beSigned(Bureaucrat b)
{
    if (b.getGrade() <= this->requiredGradeToSign)
        this->isSigned = true;
    else
        throw GradeTooLowException();
}


// ------------------------------------------
//           getters and setters
// ------------------------------------------

std::string AForm::getName() const
{
    return this->name;
}

bool AForm::getIsSigned() const
{
    return this->isSigned;
}

int AForm::getRequiredGradeToSign() const
{
    return this->requiredGradeToSign;
}

int AForm::getRequiredGradeToExecute() const
{
    return this->requiredGradeToExecute;
}

// ------------------------------------------
//           external functions
// ------------------------------------------

std::ostream& operator<<(std::ostream &output, const AForm &other)
{
    output << "+AForm informations:\n"
        << "==> name: " << other.getName() << "\n"
        << "==> required grade to sign: " << other.getRequiredGradeToSign() << "\n"
        << "==> required grade to execute: " << other.getRequiredGradeToExecute() << "\n"
        << "==> is signed: " << other.getIsSigned() << "\n\n";
    return output;
}