/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:55:25 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/23 21:02:18 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    return ;
}

Weapon::Weapon()
{
    return ;
}

Weapon::~Weapon()
{
    return ;
}

std::string const &Weapon::getType(void)
{
    return (this->_type);
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}