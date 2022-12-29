/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:42:41 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/29 16:26:17 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MyHeader.hpp"

void replaceInFile(std::string filename, std::string oldS, std::string newS)
{
    std::string     text;
    std::string     tmp;
    size_t          found;
    std::ifstream   infile;
    std::ofstream   outfile;
    
    infile.open(filename);
    getline(infile, text, '\0');
    for (size_t i = 0; i < text.length(); i++)
    {
        tmp = text.substr(i);
        found = tmp.find(oldS);
        if (found != std::string::npos)
        {
            text.erase(i + found, oldS.length());
            text.insert(i + found, newS);
        }
        else
            break ;
        i += found + newS.length();
    }
    outfile.open(filename + ".replace");
    outfile << text;
    outfile.close();
    infile.close();
}

int main(int ac, char **av)
{
    if (ac == 4)
        replaceInFile(av[1], av[2], av[3]);
    else
        std::cout << "==> Please Enter : ./replacer <filename> s1 s2\n";
    return 0;
}
