/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboumahd <hboumahd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:10:43 by hboumahd          #+#    #+#             */
/*   Updated: 2022/12/20 13:18:47 by hboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain &other);
    Brain& operator=(const Brain &other);
    ~Brain();
};