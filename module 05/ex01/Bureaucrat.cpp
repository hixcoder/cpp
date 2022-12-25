/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:40:41 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/25 11:34:04 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

// ------------------------------------------
//                 constructors
// ------------------------------------------

Bureaucrat::Bureaucrat(): name("unknown")
{
    this->grade = 150;
}

Bureaucrat::Bureaucrat(const std::string Name, int Grade) : name(Name), grade(Grade)
{
    if (this->grade > 150) {
        throw GradeTooLowException();
    } else if (this->grade < 1) {
        throw GradeTooHighException();
    }
    this->grade = Grade;
}


Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    this->grade = other.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

// ------------------------------------------
//                functions
// ------------------------------------------

void Bureaucrat::incrementGrade()
{
    this->grade--;
    if (this->grade < 1) {
        throw GradeTooHighException();
    }
    
}
void Bureaucrat::decrementGrade()
{
    this->grade++;
    if (this->grade > 150) {
        throw GradeTooLowException();
    }
}

void Bureaucrat::signForm(Form f)
{
    if (this->grade <= f.getRequiredGradeToSign())
    {
        f.setIsSigned(true);
        std::cout << this->getName() << " signed " << f.getName() << "\n";
    }
    else
    {
        std::cout << this->getName() << " couldn't sign " << f.getName() 
            << " because the required grade to sign the form is: " << f.getRequiredGradeToSign() << "\n"
            << "and " << this->getName() << "\'s grade is: " << this->getGrade() << "\n";
    }
}

// ------------------------------------------
//           getters and setters
// ------------------------------------------

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

// ------------------------------------------
//           external functions
// ------------------------------------------

std::ostream& operator<<(std::ostream &output, const Bureaucrat &other)
{
    output << other.getName() << ", bureaucrat grade " << other.getGrade();
    return output;
}

