/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:06:06 by hboumahd          #+#    #+#             */
/*   Updated: 2023/05/16 16:05:44 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <vector>
# include <list>
#include <sstream>

class PmergeMe
{
private:
    char **_av;
    int len;
    std::vector<int> myV;
    std::list<int> myList;

public:
    PmergeMe();
    PmergeMe(char **av);
    ~PmergeMe();
    
    void printBefore();
    int stringToInt(const std::string& str);

    // vector functions
    void sortWithVector();
    int convertToVector();
    void sortIMwithVector(int l, int r);
    void sortMergeWithVector(int l, int r, int mid);

    // List functions
    void sortWithList();
    int convertToList();
    void sortIMwithList(int l, int r);
    void sortMergeWithList(int l, int r, int mid);
    

};



