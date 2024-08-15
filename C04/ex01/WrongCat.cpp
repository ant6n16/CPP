/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:53:13 by antdelga          #+#    #+#             */
/*   Updated: 2024/08/15 14:05:09 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "WrongCat of type " << type << " constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
    *this = src;
    std::cout << "WrongCat " << src.getType() << " copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
    if (this != &src)
        this->_type = src.getType();
    std::cout << "WrongCat " << this->getType() << " assignation operator called" << std::endl;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat makes mew mew as a WrongCat" << std::endl;
}