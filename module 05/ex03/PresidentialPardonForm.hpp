/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:34:48 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/25 13:29:58 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MyHeader.hpp"

class PresidentialPardonForm: public AForm
{
private:
    std::string target;
public:
    PresidentialPardonForm(std::string target);
    
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &other);
    PresidentialPardonForm& operator=(const PresidentialPardonForm &other);
    ~PresidentialPardonForm();
    
    void execute(Bureaucrat const & executor) const;
    void executeMyForm() const;
};
