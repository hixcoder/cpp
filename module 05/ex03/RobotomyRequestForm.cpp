/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:35:51 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/25 13:21:25 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

// ------------------------------------------
//                 constructors
// ------------------------------------------

RobotomyRequestForm::RobotomyRequestForm() 
    :AForm("RobotomyRequestForm", 72, 45)
{
  this->target = "unknown";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    :AForm("RobotomyRequestForm", 72, 45) 
{
  this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
    *this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    this->target = other.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

// ------------------------------------------
//                functions
// ------------------------------------------

void RobotomyRequestForm::executeMyForm() const
{
    int isSuccessfull = rand() % 2;
    std::cout << "Some drilling noises...\n";
    if (isSuccessfull)
        std::cout << this->target << " has been robotomized!  :)\n";
    else
        std::cout << "the robotomy failed.  :(\n";
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIsSigned())
        throw FormIsNotSigned();
    else if (this->getRequiredGradeToExecute() < executor.getGrade())
        throw GradeTooLowException();
    else
        this->executeMyForm();
}
