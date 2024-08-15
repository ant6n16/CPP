/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:32:56 by antdelga          #+#    #+#             */
/*   Updated: 2024/08/15 13:47:13 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Default dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
    *this = src;
    std::cout << "Dog " << src.getType() << " copy constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
    std::cout << "Dog " << this->getType() << " assignation operator called" << std::endl;
    this->_type = src.getType();
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog is barking" << std::endl;
}