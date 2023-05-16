/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:06:13 by hboumahd          #+#    #+#             */
/*   Updated: 2023/05/16 18:32:31 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::~PmergeMe()
{
}
PmergeMe::PmergeMe(char **av) : _av(av)
{
    if (!validateNbrs())
    {
        std::cout << "Error\n";
    }
    else
    {
        sortWithVector();
        sortWithArray();
    }
}

// ======================= VECTOR FUNCTIONS ================================

int PmergeMe::convertToVector()
{
    int i;
    int intValue;

    i = 0;
    while (_av[++i])
    {
        intValue = stringToInt(_av[i], true);
        if (intValue == -1)
        {
            return 0;
        }
        myV.push_back(intValue);
    }
    return 1;
}

void PmergeMe::sortMergeWithVector(int l, int r, int mid)
{
    int Llen, Rlen;
    Llen = mid - l + 1;
    Rlen = r - mid;

    std::vector<int> L(Llen);
    std::vector<int> R(Rlen);

    for (std::vector<int>::size_type i = 0; i < L.size(); i++)
    {
        L[i] = myV[l + i];
    }
    for (std::vector<int>::size_type i = 0; i < R.size(); i++)
    {
        R[i] = myV[i + mid + 1];
    }

    int i, j, k;
    i = l;
    j = 0;
    k = 0;
    while (j < Llen && k < Rlen)
    {
        if (L[j] <= R[k])
        {
            myV[i] = L[j];
            j++;
        }
        else if (L[j] > R[k])
        {
            myV[i] = R[k];
            k++;
        }
        i++;
    }

    while (j < Llen)
    {
        myV[i] = L[j];
        j++;
        i++;
    }

    while (k < Rlen)
    {
        myV[i] = R[k];
        k++;
        i++;
    }
}

void PmergeMe::sortIMwithVector(int l, int r)
{
    int canDoInsert = 5;
    if ((r - l) <= canDoInsert)
    {
        for (int i = l + 1; i <= r; i++)
        {
            int tmp = myV[i];
            int j = i - 1;
            while (j >= l && myV[j] > tmp)
            {
                myV[j + 1] = myV[j];
                j--;
            }
            myV[j + 1] = tmp;
        }
    }
    else
    {
        int midx = l + (r - l) / 2;
        sortIMwithVector(l, midx);
        sortIMwithVector(midx + 1, r);
        sortMergeWithVector(l, r, midx);
    }
}

void PmergeMe::sortWithVector()
{
    clock_t start = clock();
    if (convertToVector() == 0)
    {
        return;
    }
    printBefore();

    sortIMwithVector(0, len - 1);
    clock_t end = clock();
    double microseconds = static_cast<double>(end - start) / (CLOCKS_PER_SEC / 1000000.0);

    std::cout << "after: ";
    for (std::vector<int>::size_type i = 0; i < myV.size(); i++)
    {
        std::cout << myV[i] << " ";
    }
    std::cout << "\n";

    // Print the execution time
    std::cout << "Time to process a range of " << len << " elements with std::vector : " << microseconds << " us\n";
}

// ========================================================================

// ======================= Array FUNCTIONS ================================


int PmergeMe::convertToArray()
{
    int i;
    int intValue;

    i = 0;
    while (_av[++i])
    {
        intValue = stringToInt(_av[i], false);
        if (intValue == -1)
        {
            return 0;
        }
        myArray[i - 1] = intValue;
    }
    return 1;
}

void PmergeMe::sortMergeWithArray(int l, int r, int mid)
{
    int Llen, Rlen;
    Llen = mid - l + 1;
    Rlen = r - mid;

    std::array<int, 5000> L;
    std::array<int, 5000> R;

    for (int i = 0; i < Llen; i++)
    {
        L[i] = myArray[l + i];
    }
    for (int i = 0; i < Rlen; i++)
    {
        R[i] = myArray[i + mid + 1];
    }

    int i, j, k;
    i = l;
    j = 0;
    k = 0;
    while (j < Llen && k < Rlen)
    {
        if (L[j] <= R[k])
        {
            myArray[i] = L[j];
            j++;
        }
        else if (L[j] > R[k])
        {
            myArray[i] = R[k];
            k++;
        }
        i++;
    }

    while (j < Llen)
    {
        myArray[i] = L[j];
        j++;
        i++;
    }

    while (k < Rlen)
    {
        myArray[i] = R[k];
        k++;
        i++;
    }
}

void PmergeMe::sortIMwithArray(int l, int r)
{
    int canDoInsert = 5;
    if ((r - l) <= canDoInsert)
    {
        for (int i = l + 1; i <= r; i++)
        {
            int tmp = myArray[i];
            int j = i - 1;
            while (j >= l && myArray[j] > tmp)
            {
                myArray[j + 1] = myArray[j];
                j--;
            }
            myArray[j + 1] = tmp;
        }
    }
    else
    {
        int midx = l + (r - l) / 2;
        sortIMwithArray(l, midx);
        sortIMwithArray(midx + 1, r);
        sortMergeWithArray(l, r, midx);
    }
}

void PmergeMe::sortWithArray()
{
    clock_t start = clock();
    if (convertToArray() == 0)
    {
        return;
    }
    sortIMwithArray(0, len - 1);
    clock_t end = clock();
    double microseconds = static_cast<double>(end - start) / (CLOCKS_PER_SEC / 1000000.0);
    // Print the execution time
    std::cout << "Time to process a range of " << len << " elements with std::array : " << microseconds << " us\n";
}


// ========================================================================

bool PmergeMe::validateNbrs()
{
    int i = 0;
    while (_av[++i])
    {
        int j= -1;
        while (_av[i][++j])
        {
            if (!std::isdigit(_av[i][j]) && _av[i][j] != '-' && _av[i][j] != '+')
            {
                return false;
            }
        }
    }
    return true;
}



void PmergeMe::printBefore()
{
    len = 0;
    std::cout << "Before: ";
    while (_av[++len])
    {
        std::cout << _av[len] << " ";
    }
    std::cout << "\n";
    len--;
}

int PmergeMe::stringToInt(const std::string &str, bool doWrite)
{
    std::istringstream iss(str);
    int intValue;
    if (iss >> intValue)
    {
        if (intValue < 0)
        {
            if (doWrite)
            {
                std::cout << "Error\n";
            }
            return -1;
        }
        return intValue;
    }
    else
    {
        std::cout << "Error: Please Enter a positive integer sequence!";
        return -1;
    }
}
