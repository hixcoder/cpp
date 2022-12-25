/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:40:36 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/25 11:06:41 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MyHeader.hpp"

class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(const std::string Name, int Grade);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat& operator=(const Bureaucrat &other);
    ~Bureaucrat();
    
    class GradeTooHighException: public std::exception
    {
        public:
            virtual const char* what() const throw() { return "GradeTooHighException"; }
    };
    class GradeTooLowException: public std::exception
    {
        public:
            virtual const char* what() const throw() { return "GradeTooLowException"; }
    };
    
    void incrementGrade();
    void decrementGrade();
    void signForm(AForm &f);
    void executeForm(AForm const & form);
    
    std::string getName() const;
    int getGrade() const;

};

std::ostream& operator<<(std::ostream &output, const Bureaucrat &other);
