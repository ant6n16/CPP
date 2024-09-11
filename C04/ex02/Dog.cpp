/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:32:56 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/11 12:06:52 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    this->_brain = new Brain();
    std::cout << "Default dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
    this->_brain = new Brain(*src._brain);
    this->_type = src._type;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
    if (this != &src)
    {
        this->_type = src.getType();
        
        delete this->_brain;
        this->_brain = new Brain(*src._brain);
    }    
    std::cout << "Dog assignation operator called" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog is barking" << std::endl;
}

void Dog::setIdea(int index, std::string idea)
{
    this->_brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
    return this->_brain->getIdea(index);
}
