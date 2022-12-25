/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:59:18 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/25 14:59:19 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "MyHeader.hpp"

// ------------------------------------------
//                 constructors
// ------------------------------------------

ShrubberyCreationForm::ShrubberyCreationForm() 
    :AForm("ShrubberyCreationForm", 145, 137)
{
  this->target = "unknown";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    :AForm("ShrubberyCreationForm", 145, 137) 
{
  this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
    *this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    this->target = other.target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

// ------------------------------------------
//                functions
// ------------------------------------------

void ShrubberyCreationForm::executeMyForm() const
{
    std::ofstream   outfile;
    
    outfile.open(this->target + "_shrubbery");
    outfile << "                        ___\n";
    outfile << "                _,-^^^   ^^^^`--.\n" ;
    outfile << "            ,-^          __,,-- \n" ;
    outfile << "        ,^    __,--^^^^dF      )\n" ;
    outfile << "        /   .-^Hb_,--^^dF      /\n" ;
    outfile << "        ,^       _Hb ___dF^-._,-^\n" ;
    outfile << "    ,^      _,-^^^^   ^^--..__\n" ;
    outfile << "    (     ,-^                  `.\n" ;
    outfile << "    `._,^     _   _             ;\n" ;
    outfile << "    ,^     ,^ `-^Hb-.___..._,-^\n" ;
    outfile << "    |    ,^^Hb.-^HH`-.dHF^\n" ;
    outfile << "        `--^   ^Hb  HH  dF^\n" ;
    outfile << "               ^Hb HH dF\n" ;
    outfile << "               ^HbHHdF\n" ;
    outfile << "                |HHHF\n" ;
    outfile << "                |HHH|\n" ;
    outfile << "                |HHH|\n" ;
    outfile << "                |HHH|\n" ;
    outfile << "                |HHH|\n" ;
    outfile << "                dHHHb\n" ;
    outfile << "              .dFd|bHb.\n" ;
    outfile << "  o o       .dHFdH|HbTHb.\n" ;
    outfile << "Y  |   ___,dHHFdHH|HHhoHHb._______  Y\n" ;
    outfile << "##########################################\n" ;
    outfile.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIsSigned())
        throw FormIsNotSigned();
    else if (this->getRequiredGradeToExecute() < executor.getGrade())
        throw GradeTooLowException();
    else
        this->executeMyForm();
}
