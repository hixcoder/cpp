/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:22:12 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/25 16:13:48 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

// ------------------------------------------
//                 constructors
// ------------------------------------------

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
    *this = other;
}

Intern& Intern::operator=(const Intern &other)
{
    (void) other;
    return (*this);
}

Intern::~Intern()
{
}

// ------------------------------------------
//                functions
// ------------------------------------------

AForm *shrubberyCreation(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm *robotomyRequest(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm *presidentialPardon(std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(std::string Fname, std::string target)
{
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    fPtr[0] = &Intern::shrubberyCreation;
    fPtr[1] = &Intern::robotomyRequest;
    fPtr[2] = &Intern::presidentialPardon;
    for (int i = 0; i < 3; i++)
    {
        if (Fname == formNames[i])
            return (this->*fPtr[i])(target);
    }
    
}