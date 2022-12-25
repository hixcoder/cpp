/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:50:28 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/25 17:04:36 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

// ------------------------------------------
//                 constructors
// ------------------------------------------

Form::Form() : name("unknown"), requiredGradeToSign(50), requiredGradeToExecute(50)
{
    this->isSigned = false;
}

Form::Form(const std::string Name, const int RequiredGradeToSign, const int RequiredGradeToExecute)
    :name(Name), requiredGradeToSign(RequiredGradeToSign), requiredGradeToExecute(RequiredGradeToExecute)
{
    if (this->requiredGradeToSign > 150 || this->requiredGradeToExecute > 150) {
        throw GradeTooLowException();
    } else if (this->requiredGradeToSign < 1 || this->requiredGradeToExecute < 1) {
        throw GradeTooHighException();
    }
    this->isSigned = false;
}

Form::Form(const Form &other)
    :name(other.name), requiredGradeToSign(other.requiredGradeToSign), requiredGradeToExecute(other.requiredGradeToExecute)
{
    *this = other;
}

Form& Form::operator=(const Form &other)
{
    this->isSigned = other.isSigned;
    return (*this);
}

Form::~Form()
{
}

// ------------------------------------------
//                functions
// ------------------------------------------

void Form::beSigned(Bureaucrat b)
{
    if (b.getGrade() <= this->requiredGradeToSign)
        this->isSigned = true;
    else
        throw GradeTooLowException();
}


// ------------------------------------------
//           getters and setters
// ------------------------------------------

std::string Form::getName() const
{
    return this->name;
}

bool Form::getIsSigned() const
{
    return this->isSigned;
}

int Form::getRequiredGradeToSign() const
{
    return this->requiredGradeToSign;
}

int Form::getRequiredGradeToExecute() const
{
    return this->requiredGradeToExecute;
}

// ------------------------------------------
//           external functions
// ------------------------------------------

std::ostream& operator<<(std::ostream &output, const Form &other)
{
    output << "+Form informations:\n"
        << "==> name: " << other.getName() << "\n"
        << "==> required grade to sign: " << other.getRequiredGradeToSign() << "\n"
        << "==> required grade to execute: " << other.getRequiredGradeToExecute() << "\n"
        << "==> is signed: " << other.getIsSigned() << "\n\n";
    return output;
}
