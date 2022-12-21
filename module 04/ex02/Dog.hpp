/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:14:16 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/21 12:18:20 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include "Brain.hpp"
# include "A_Animal.hpp"

class Dog : public A_Animal
{
private:
    Brain* dogBrain;
public:
    Dog();
    Dog(const Dog &other);
    Dog& operator=(const Dog &other);
    ~Dog();

    void    makeSound() const;
    
    Brain *getDogBrain() const;
    void setDogBrain(Brain *DogBrain);
};