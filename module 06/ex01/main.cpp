/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:36:38 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/29 18:23:02 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyHeader.hpp"

uintptr_t serialize(Data* ptr)
{
    if (ptr == NULL)
        return 0;
    return reinterpret_cast<uintptr_t> (ptr); 
}

Data* deserialize(uintptr_t raw)
{
    if (raw == 0)
        return NULL;
    return reinterpret_cast<Data*> (raw); 
}

int main()
{
    Data d;
    Data *pd;
    Data *pd2;
    uintptr_t raw;

    pd = &d;
    d.sayHello();

    std::cout << "this is pd  = " << pd << "\n";
    raw = serialize(pd);
    pd2 = deserialize(raw);
    std::cout << "this is pd2 = " << pd2 << "\n";

    if (pd == pd2)
        std::cout << "test: ok\n";
    else
        std::cout << "test: ko\n";
    pd2->sayHello();
}
