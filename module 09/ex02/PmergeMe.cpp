/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:06:13 by hboumahd          #+#    #+#             */
/*   Updated: 2023/05/16 15:52:22 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::~PmergeMe()
{
}
PmergeMe::PmergeMe(char **av) : _av(av)
{
    printBefore();
    sortWithVector();
    sortWithList();
}

// ======================= VECTOR FUNCTIONS ================================

int PmergeMe::convertToVector()
{
    int i;
    int intValue;

    i = 0;
    while (_av[++i])
    {
        intValue = stringToInt(_av[i]);
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

// ======================= List FUNCTIONS ================================

int PmergeMe::convertToList()
{
    int i;
    int intValue;

    i = 0;
    while (_av[++i])
    {
        intValue = stringToInt(_av[i]);
        if (intValue == -1)
        {
            return 0;
        }
        myList.push_back(intValue);
    }
    return 1;
}

void PmergeMe::sortMergeWithList(int l, int r, int mid)
{
    int Llen, Rlen;
    Llen = mid - l + 1;
    Rlen = r - mid;

    // std::vector<int> L(Llen);
    // std::vector<int> R(Rlen);

    std::list<int> L(Llen);
    std::list<int> R(Rlen);

    std::list<int>::iterator itMylist = myList.begin();
    std::list<int>::iterator itL = L.begin();
    std::list<int>::iterator itR = R.begin();

    std::advance(itMylist, l);
    // for (std::vector<int>::size_type i = 0; i < L.size(); i++)
    // {
    //     L[i] = myV[l + i];
    // }

    for (int i = 0; i < Llen; i++)
    {
        *itL = *itMylist;
        std::cout << *itMylist << " ";
        itL++;
        itMylist++;
    }
std::cout << "\n";
    
    // for (std::vector<int>::size_type i = 0; i < R.size(); i++)
    // {
    //     R[i] = myV[i + mid + 1];
    // }
    
    itMylist = myList.begin();
    std::advance(itMylist, mid + 1);
    for (int i = 0; i < Rlen; i++)
    {
        *itR = *itMylist;
        std::cout << *itMylist << " ";
        itR++;
        itMylist++;
    }

std::cout << "\n";

    // int i, j, k;
    // i = l;
    // j = 0;
    // k = 0;
    // while (j < Llen && k < Rlen)
    // {
    //     if (L[j] <= R[k])
    //     {
    //         myV[i] = L[j];
    //         j++;
    //     }
    //     else if (L[j] > R[k])
    //     {
    //         myV[i] = R[k];
    //         k++;
    //     }
    //     i++;
    // }

    itL = L.begin();
    itR = R.begin();
    itMylist = myList.begin();
    std::advance(itMylist, l);

    int j = 0;
    int k = 0;

    while (j < Llen && k < Rlen) {
        if (*itL <= *itR) {
            *itMylist = *itL;
            ++itL;
            ++j;
        } else {
            *itMylist = *itR;
            ++itR;
            ++k;
        }
        ++itMylist;
    }



    // while (j < Llen)
    // {
    //     myV[i] = L[j];
    //     j++;
    //     i++;
    // }

    // while (k < Rlen)
    // {
    //     myV[i] = R[k];
    //     k++;
    //     i++;
    // }

      while (j < Llen) {
        *itMylist = *itL;
        ++itMylist;
        ++itL;
        ++j;
    }

    while (k < Rlen) {
        *itMylist = *itR;
        ++itMylist;
        ++itR;
        ++k;
    }
}

void PmergeMe::sortIMwithList(int l, int r)
{
    int canDoInsert = 5;
    std::list<int>::iterator it = myList.begin();
    std::advance(it, l + 1);
    int count = r - l;
    if (count <= canDoInsert)
    {
        for (int i = 0; i < count; i++)
        {
            int tmp = *it;
            std::list<int>::iterator j = it;
            while (j != myList.begin() && *std::prev(j) > tmp)
            {
                *j = *std::prev(j);
                --j;
            }
            *j = tmp;
            ++it;
        std::cout << *it << " ";

        }
        std::cout << "\n";
    }
    else
    {
        int midx = l + (r - l) / 2;
        sortIMwithList(l, midx);
        sortIMwithList(midx + 1, r);
        sortMergeWithList(l, r, midx);
    }
}

void PmergeMe::sortWithList()
{
    clock_t start = clock();
    if (convertToList() == 0)
    {
        return;
    }

    sortIMwithList(0, len - 1);
    clock_t end = clock();
    double microseconds = static_cast<double>(end - start) / (CLOCKS_PER_SEC / 1000000.0);

    std::cout << "\nafter: ";
    for (std::list<int>::iterator it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    // Print the execution time
    std::cout << "Time to process a range of " << len << " elements with std::List : " << microseconds << " us\n";
}

// ========================================================================

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

int PmergeMe::stringToInt(const std::string &str)
{
    std::istringstream iss(str);
    int intValue;
    if (iss >> intValue)
    {
        if (intValue < 0)
        {
            std::cout << "Error: Please Enter a positive integer sequence!";
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
