/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:06:06 by hboumahd          #+#    #+#             */
/*   Updated: 2023/05/17 13:15:52 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <vector>
# include <array>
#include <sstream>

class PmergeMe
{
private:
    char **_av;
    int len;
    std::vector<int> myV;
    std::array<int, 10000> myArray;

public:
    PmergeMe(char **av);
    PmergeMe();
    PmergeMe(const PmergeMe &other);
    PmergeMe& operator=(const PmergeMe &other);
    ~PmergeMe();
    
    void printBefore();
    int stringToInt(const std::string &str, bool doWrite);
    bool validateNbrs();

    // vector functions
    void sortWithVector();
    int convertToVector();
    void sortIMwithVector(int l, int r);
    void sortMergeWithVector(int l, int r, int mid);

    // Array functions
    void sortWithArray();
    int convertToArray();
    void sortIMwithArray(int l, int r);
    void sortMergeWithArray(int l, int r, int mid);
    

};



