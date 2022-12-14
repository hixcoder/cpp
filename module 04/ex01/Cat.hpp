/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:14:08 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/21 10:22:01 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include "Brain.hpp"
# include "Animal.hpp"

class Cat: public Animal
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