/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:22:12 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/25 19:11:38 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MyHeader.hpp"

class Intern
{
private:
    AForm *(Intern::*fPtr[3])(std::string target);
    
public:
    Intern(std::string target);
    
    Intern();
    Intern(const Intern &other);
    Intern& operator=(const Intern &other);
    ~Intern();

    class FormNameNotExist: public std::exception
    {
        public:
            virtual const char* what() const throw() { return "FormNameNotExist"; }
    };
    
    AForm *makeForm(std::string Fname, std::string target);
    AForm *shrubberyCreation(std::string target);
    AForm *robotomyRequest(std::string target);
    AForm *presidentialPardon(std::string target);
};
