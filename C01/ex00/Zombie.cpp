/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:00:19 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/23 20:01:32 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
}
Zombie::~Zombie()
{
    std::cout << this->_name << " is dead" << std::endl;
}
void    Zombie::announce(void)
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}