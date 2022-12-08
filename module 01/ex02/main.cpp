/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:10:50 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/08 15:09:20 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "The memory address of the string variable: "<< &str << "\n";
    std::cout << "The memory address held by stringPTR     : "<< stringPTR << "\n";
    std::cout << "The memory address held by stringREF     : "<< &stringREF << "\n\n";
    
    std::cout << "The value of the string variable  : "<< str << "\n";
    std::cout << "The value pointed to by stringPTR : "<< *stringPTR << "\n";
    std::cout << "The value pointed to by stringREF : "<< stringREF << "\n\n";
}