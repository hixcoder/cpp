/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:40:41 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/23 12:13:44 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

Bureaucrat::Bureaucrat()
{
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

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

std::ostream& operator<<(std::ostream &output, const Bureaucrat &other)
{
    output << other.getName() << ", bureaucrat grade " << other.getGrade();
    return output;
}

