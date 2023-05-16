/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:06:21 by hboumahd          #+#    #+#             */
/*   Updated: 2023/05/15 12:27:32 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {

    if (ac >= 2)
    {
        PmergeMe pmergeMe = PmergeMe(av);
    }
    else
        std::cout << "Error\n";
    return 0;
}














