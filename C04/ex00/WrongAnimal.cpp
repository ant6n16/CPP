/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:50:40 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/10 13:48:44 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "WrongAnimal of type " << type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    *this = src;
    std::cout << "WrongAnimal " << src._type << " copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
    if (this != &src)
        this->_type = src._type;
    std::cout << "WrongAnimal Assignation operator called" << std::endl;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->_type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes a sound" << std::endl;
}