/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 21:01:17 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/23 21:03:58 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    return ;
}

HumanA::~HumanA()
{
    return ;
}

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
