/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:12:27 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/11 13:01:39 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "MyHeader.hpp"

int main(int ac, char **av)
{
    Harl h1;
    
    if (ac == 2)
        h1.complain(av[1]);
    else
        std::cout << "[ Probably complaining about insignificant problems ]\n";
}
