/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:14:16 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/20 11:26:39 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include "MyHeader.hpp"

class Dog : public Animal
{

public:
    Dog();
    Dog(const Dog &other);
    Dog& operator=(const Dog &other);
    ~Dog();

    void    makeSound() const;
};