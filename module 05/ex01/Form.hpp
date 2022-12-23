/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:50:28 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/23 16:02:40 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>

class Form
{
private:
    const std::string name;
    bool isSigned;
    const int grade;
    const int requiredGrade;

public:
    Form();
    Form(const std::string Name, int Grade);
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
};