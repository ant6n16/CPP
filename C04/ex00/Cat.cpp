/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:35:36 by antdelga          #+#    #+#             */
/*   Updated: 2024/08/15 13:47:01 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Default cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
    *this = src;
    std::cout << "Cat " << src.getType() << " copy constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
    std::cout << "Cat " << this->getType() << " assignation operator called" << std::endl;
    this->_type = src.getType();
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat is meowing" << std::endl;
}

