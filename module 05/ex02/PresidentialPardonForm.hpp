/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:35:41 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/24 15:50:02 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MyHeader.hpp"

class PresidentialPardonForm: public AForm
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string Name, const int RequiredGradeToSign, const int RequiredGradeToExecute);
    PresidentialPardonForm(const PresidentialPardonForm &other);
    PresidentialPardonForm& operator=(const PresidentialPardonForm &other);
    ~PresidentialPardonForm();
    
    void execute(Bureaucrat const & executor) const;
};
