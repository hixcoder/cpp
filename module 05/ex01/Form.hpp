/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:50:28 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/25 16:58:06 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MyHeader.hpp"
class Bureaucrat;

class Form
{
private:
    const std::string name;
    bool isSigned;
    const int requiredGradeToSign;
    const int requiredGradeToExecute;

public:
    Form();
    Form(const std::string Name, const int RequiredGradeToSign, const int RequiredGradeToExecute);
    Form(const Form &other);
    Form& operator=(const Form &other);
    ~Form();
    
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

    void beSigned(Bureaucrat b);

    std::string getName() const;
    bool getIsSigned() const;
    int getRequiredGradeToSign() const;
    int getRequiredGradeToExecute() const;
};

std::ostream& operator<<(std::ostream &output, const Form &other);