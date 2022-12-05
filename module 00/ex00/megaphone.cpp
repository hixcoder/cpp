/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:10:43 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/05 11:41:37 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void    PrintStrToUpper(const char *str)
{
    int i;

    i = -1;
    while (str[++i])
        std::cout << (char)toupper(str[i]);
}

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac > 1)
    {
        for (int i = 1; av[i]; i++)
            PrintStrToUpper(av[i]);
    }
    else if (ac == 1)
        PrintStrToUpper("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
    PrintStrToUpper("\n");
}