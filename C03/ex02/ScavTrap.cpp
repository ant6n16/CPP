/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:00:20 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/10 13:00:36 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    this->_guarding_gate = false;
    std::cout << "ScavTrap " << this->_name << " is born from a ClapTrap default constructor!" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    this->_guarding_gate = false;
    std::cout << "ScavTrap " << this->_name << " is born from a ClapTrap!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " is destroyed!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src)
{
    this->_guarding_gate = src._guarding_gate;
    std::cout << "ScavTrap " << this->_name << " copied from " << src._name << "ClapTrap!" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
    if (this != &src)
    {
        ClapTrap::operator=(src);
        std::cout << "ScavTrap " << this->_name << "values assigned from" << src._name << "ClapTrap" << std::endl;
        this->_guarding_gate = src._guarding_gate;
    }
    return (*this);
}

void ScavTrap::attack(std::string const &target)
{
    if (this->_energy_points <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " hasn't energy enough to attack!" << std::endl;
        return ;
    }
    if (this->_hit_points <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead and it cannot attack!" << std::endl;
        return ;
    }
    if (this->_guarding_gate == true)
    {
        std::cout << "ScavTrap " << this->_name << " left guarding the gate and attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
        this->_guarding_gate = false;
        this->_energy_points -= 1;
        return ;
    }
    this->_energy_points -= 1;
    std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    if (this->_hit_points <= 0 or this->_energy_points <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead or has not energy points; it can't guard the gate!" << std::endl;
        return ;
    }
    else if (this->_guarding_gate == false)
    {
        this->_guarding_gate = true;
        std::cout << "ScavTrap " << this->_name << " is now guarding the gate!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->_name << " is already guarding the gate!" << std::endl;
}
