/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:50:28 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/25 19:29:43 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "MyHeader.hpp"
class Bureaucrat;

class AForm
{
private:
    const std::string name;
    bool isSigned;
    const int requiredGradeToSign;
    const int requiredGradeToExecute;


public:
    AForm();
    AForm(const std::string Name, const int RequiredGradeToSign, const int RequiredGradeToExecute);
    AForm(const AForm &other);
    AForm& operator=(const AForm &other);
    virtual ~AForm();
    
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
    class FormIsNotSigned: public std::exception
    {
        public:
            virtual const char* what() const throw() { return "FormIsNotSigned"; }
    };

    void beSigned(Bureaucrat b);
    virtual void execute(Bureaucrat const & executor) const = 0;

    std::string getName() const;
    bool getIsSigned() const;
    int getRequiredGradeToSign() const;
    int getRequiredGradeToExecute() const;
};

std::ostream& operator<<(std::ostream &output, const AForm &other);