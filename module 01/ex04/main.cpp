/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:42:41 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/09 12:11:14 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MyHeader.hpp"

std::string getText(char *filename)
{
    std::string     data;
    std::string     line;
    std::ifstream   infile;
    char tmp[100]; 
    
    infile.open(filename);
    while (!infile.eof())
    {
        infile >> tmp;
        getline(infile, line);
        data += line + "\n";
    }
    infile.close();
    return (data);
}

void replaceInFile(char *filename, char *s1, char *s2)
{
    std::string     text;
    
    text = getText(filename);
    std::cout << s1 << "\n";
    std::cout << s2 << "\n\n\n";
    std::cout << text << "\n";
}

int main(int ac, char **av)
{
    if (ac == 4)
        replaceInFile(av[1], av[2], av[3]);
    else
        std::cout << "==> Please Enter : ./replacer <filename> s1 s2\n";
    return 0;
}