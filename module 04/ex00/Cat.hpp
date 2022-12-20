/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:14:08 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/20 11:26:46 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include "MyHeader.hpp"

class Cat: public Animal
{

public:
    Cat();
    Cat(const Cat &other);
    Cat& operator=(const Cat &other);
    ~Cat();

    void    makeSound() const;
};