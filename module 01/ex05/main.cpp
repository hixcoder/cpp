/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:12:27 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/11 12:46:18 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "MyHeader.hpp"

int main()
{
    Harl h1;
    std::string level;
    
    level = "DEBUG";
    level = "WARNING";
    level = "INdfdFO";
    level = "INFO";
    level = "ERROR";
    h1.complain(level);
}
