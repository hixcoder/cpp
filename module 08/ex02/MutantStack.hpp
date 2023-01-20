/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:43:26 by hboumahd          #+#    #+#             */
/*   Updated: 2023/01/20 12:55:51 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

# include <iostream>
# include <string>
# include <algorithm>
# include <climits>
#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
private:

public:
    MutantStack();
    MutantStack(const MutantStack &other);
    ~MutantStack();
    MutantStack &operator=(const MutantStack &other);

};

