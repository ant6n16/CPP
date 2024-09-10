/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:25:55 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/10 13:25:27 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Default animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal of type " << type << " constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
    *this = src;
    std::cout << "Animal " << src._type << " copy constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &src)
{
    if (this != &src)
        this->_type = src._type;
    std::cout << "Animal assignation operator called" << std::endl;
    return *this;
}

std::string Animal::getType() const
{
    return this->_type;
}

void Animal::makeSound() const
{
    std::cout << "Animal makes a sound" << std::endl;
}
