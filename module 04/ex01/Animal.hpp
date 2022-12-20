/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:00:08 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/20 12:19:01 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>

// virtual keyword before the function makeSound() means 
// that we can override it in the derived classes

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(const Animal &other);
    Animal& operator=(const Animal &other);
    virtual ~Animal();

    virtual void makeSound() const;
    std::string getType() const;
    void setType(std::string type);
};