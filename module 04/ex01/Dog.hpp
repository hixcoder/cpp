/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:14:16 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/20 13:21:30 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include "Brain.hpp"
# include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain* dogBrain;
public:
    Dog();
    Dog(const Dog &other);
    Dog& operator=(const Dog &other);
    ~Dog();

    void    makeSound() const;
};