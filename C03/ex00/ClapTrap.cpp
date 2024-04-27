/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:18:56 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/27 19:42:48 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->_name = "ClapTrap";
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
    std::cout << "ClapTrap " << this->_name << " is born !" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
    std::cout << "ClapTrap " << this->_name << " is born !" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " is dead !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    this->_name = src._name;
    this->_hit_points = src._hit_points;
    this->_energy_points = src._energy_points;
    this->_attack_damage = src._attack_damage;
    std::cout << "ClapTrap " << this->_name << " is born by copy !" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hit_points = rhs._hit_points;
        this->_energy_points = rhs._energy_points;
        this->_attack_damage = rhs._attack_damage;
    }
    return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    if (this->_energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy !" << std::endl;
        return ;
    }
    if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead !" << std::endl;
        return ;
    }
    this->_energy_points -= 1;
    std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead !" << std::endl;
        return ;
    }
    else if ((this->_hit_points - amount) > 0)
    {
        this->_hit_points -= amount;
        std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage !" << std::endl;
    }
    else
    {
        this->_hit_points = 0;
        std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage and die !" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead, he can't be repaired !" << std::endl;
        return ;
    }
    else if (this->_energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy !" << std::endl;
        return ;
    }
    else
    {
        this->_hit_points += amount;
        std::cout << "ClapTrap " << this->_name << " is repaired of " << amount << " points !" << std::endl;
    }
}
