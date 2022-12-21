/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:00:08 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/21 12:13:17 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>

// virtual keyword before the function makeSound() means 
// that we can override it in the derived classes

class A_Animal
{
protected:
    std::string type;

public:
    A_Animal();
    A_Animal(const A_Animal &other);
    A_Animal& operator=(const A_Animal &other);
    virtual ~A_Animal();

    virtual void makeSound() const = 0;
    std::string getType() const;
    void setType(std::string type);
};