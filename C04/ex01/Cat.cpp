/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:35:36 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/10 14:28:32 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    try
    {
        this->_brain = new Brain();
    }
    catch (std::bad_alloc &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Default cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src)
{
    this->_brain = new Brain(*src._brain);
    this->_type = src._type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
    if (this != &src)
    {
        this->_type = src.getType();
        
        delete this->_brain;
        this->_brain = new Brain(*src._brain);
    }
    std::cout << "Cat assignment operator called" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat is meowing" << std::endl;
}

void Cat::setIdea(int index, std::string idea)
{
    this->_brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
    return this->_brain->getIdea(index);
}
