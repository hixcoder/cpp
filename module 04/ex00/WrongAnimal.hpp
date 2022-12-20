/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:00:08 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/20 12:54:57 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>

// virtual keyword before the function makeSound() means 
// that we can override it in the derived classes

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal& operator=(const WrongAnimal &other);
    virtual ~WrongAnimal();

    virtual void makeSound() const;
    std::string getType() const;
    void setType(std::string type);
};