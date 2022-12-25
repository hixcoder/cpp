/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:35:41 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/25 13:30:15 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MyHeader.hpp"

class ShrubberyCreationForm: public AForm
{
private:
    std::string target;
public:
    ShrubberyCreationForm(std::string target);
    
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
    ~ShrubberyCreationForm();
    
    void execute(Bureaucrat const & executor) const;
    void executeMyForm() const;
};
