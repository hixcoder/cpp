/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:14:08 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/21 12:18:15 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include "Brain.hpp"
# include "A_Animal.hpp"

class Cat: public A_Animal
{
private:
    Brain *catBrain;
public:
    Cat();
    Cat(const Cat &other);
    Cat& operator=(const Cat &other);
    ~Cat();

    void    makeSound() const;
    Brain *getCatBrain() const;
    void setCatBrain(Brain *catBrain);
};