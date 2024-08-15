/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:41:13 by antdelga          #+#    #+#             */
/*   Updated: 2024/08/15 12:56:51 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap()
{
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "FlagTrap " << this->_name << " is born from a ClapTrap default constructor!" << std::endl;
}

FlagTrap::FlagTrap(std::string name): ClapTrap(name)
{
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "FlagTrap " << this->_name << " is born from a ClapTrap!" << std::endl;
}

FlagTrap::~FlagTrap()
{
    std::cout << "FlagTrap " << this->_name << " is destroyed!" << std::endl;
}

FlagTrap::FlagTrap(FlagTrap const &src): ClapTrap(src)
{
    std::cout << "FlagTrap " << this->_name << " copied from " << src._name << "ClapTrap!" << std::endl;
}

FlagTrap &FlagTrap::operator=(FlagTrap const &src)
{
    if (this != &src)
    {
        ClapTrap::operator=(src);
    }
    std::cout << "FlagTrap " << this->_name << "values assigned from" << src._name << "ClapTrap" << std::endl;
    return (*this);
}

void    FlagTrap::highFivesGuys(void)
{
    std::cout << "FlagTrap " << this->_name << " wants a high five!" << std::endl;
}