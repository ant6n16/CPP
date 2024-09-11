/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:36:08 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/11 14:52:27 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default")
{
    for (int i = 0; i < 4; i++)
        this->_materias[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_materias[i] = NULL;
}

Character::Character(Character const &src)
{
    this->_name = src._name;
    for (int i = 0; i < 4; i++)
        this->_materias[i] = src._materias[i];
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (this->_materias[i])
            delete this->_materias[i];
}

Character &Character::operator=(Character const &src)
{
    if (this != &src)
    {
        this->_name = src._name;
        for (int i = 0; i < 4; i++)
            this->_materias[i] = src._materias[i];
    }
    return *this;
}

std::string const &Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_materias[i])
        {
            this->_materias[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (this->_materias[idx])
	{
		delete this->_materias[idx];
		this->_materias[idx] = NULL;
		std::cout << "Character " << this->_name << " unequipped" << std::endl;
	}
	else
		std::cout << "Character " << this->_name << " can't unequip" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
    if (this->_materias[idx])
	{
		std::cout << "Character " << this->_name << " uses "<< this->_materias[idx]->getType() << ".\n";
		this->_materias[idx]->use(target);
		delete this->_materias[idx];
		this->_materias[idx] = NULL;
	}
	else
		std::cout << "Character " << this->_name << " has no materias in that space... " << std::endl;
}
