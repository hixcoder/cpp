/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:50:28 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/23 16:06:16 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

Form::Form()
{
}

Form::Form(const Form &other)
{
    *this = other;
}

Form& Form::operator=(const Form &other)
{
    this->grade = other.grade;
    this->isSigned = other.isSigned;
    this->requiredGrade = other.requiredGrade;
    return (*this);
}

Form::~Form()
{
}

std::string Form::getName() const
{
    return this->name;
}

int Form::getGrade() const
{
    return this->grade;
}

std::ostream& operator<<(std::ostream &output, const Form &other)
{
    output << other.getName() << ", Form grade " << other.getGrade();
    return output;
}

