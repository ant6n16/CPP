/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:41:13 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/10 13:03:01 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "FragTrap " << this->_name << " is born from a ClapTrap default constructor!" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "FragTrap " << this->_name << " is born from a ClapTrap!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " is destroyed!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src)
{
    std::cout << "FragTrap " << this->_name << " copied from " << src._name << "ClapTrap!" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
    if (this != &src)
    {
        ClapTrap::operator=(src);
    }
    std::cout << "FragTrap " << this->_name << "values assigned from" << src._name << "ClapTrap" << std::endl;
    return (*this);
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " wants a high five!" << std::endl;
}
