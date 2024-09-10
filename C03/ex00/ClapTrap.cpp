/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:18:56 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/10 11:28:56 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap " << this->_name << " is born !" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " is destroyed !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src): _name(src._name), _hit_points(src._hit_points), _energy_points(src._energy_points), _attack_damage(src._attack_damage)
{
    std::cout << "ClapTrap " << this->_name << " is born by copy !" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
    if (this != &src)
    {
        std::cout << "ClapTrap " << this->_name << " values assigned from " << src._name << std::endl;
        this->_name = src._name;
        this->_hit_points = src._hit_points;
        this->_energy_points = src._energy_points;
        this->_attack_damage = src._attack_damage;
    }
    return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    if (this->_energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " hasn't energy enough to attack!" << std::endl;
        return ;
    }
    if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead and it cannot attack!" << std::endl;
        return ;
    }
    this->_energy_points -= 1;
    std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead, so it doesn't take damage!" << std::endl;
        return ;
    }
    else if (((int) (this->_hit_points - amount)) > 0)
    {
        this->_hit_points -= amount;
        std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    }
    else
    {
        this->_hit_points = 0;
        std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage and inmediately die!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead, it can't be repaired!" << std::endl;
        return ;
    }
    else if (this->_energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " hasn't energy enough, it can't be repaired!" << std::endl;
        return ;
    }
    else
    {
        this->_hit_points += amount;
        this->_energy_points -= 1;
        std::cout << "ClapTrap " << this->_name << " is repaired of " << amount << " points!" << std::endl;
    }
}

std::string ClapTrap::getName() const
{
    return (this->_name);
}

int ClapTrap::getHitPoints() const
{
    return (this->_hit_points);
}

int ClapTrap::getEnergyPoints() const
{
    return (this->_energy_points);
}

int ClapTrap::getAttackDamage() const
{
    return (this->_attack_damage);
}

