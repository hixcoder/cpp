/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:40:36 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/23 12:13:52 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include<iostream>
# include<string>

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
    
    class GradeTooHighException{};
    class GradeTooLowException{};
    
    void incrementGrade();
    void decrementGrade();
    std::string getName() const;
    int getGrade() const;

};

std::ostream& operator<<(std::ostream &output, const Bureaucrat &other);