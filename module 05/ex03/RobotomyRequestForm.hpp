/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:35:54 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/25 12:52:33 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MyHeader.hpp"

class RobotomyRequestForm: public AForm
{
private:
    std::string target;
public:
    RobotomyRequestForm(std::string target);
    
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &other);
    RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
    ~RobotomyRequestForm();
    
    void execute(Bureaucrat const & executor) const;
    void executeMyForm() const;
};
