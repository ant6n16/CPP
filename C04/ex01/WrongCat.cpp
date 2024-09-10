/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:53:13 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/10 13:49:14 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
    *this = src;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
    if (this != &src)
        this->_type = src.getType();
    std::cout << "WrongCat assignation operator called" << std::endl;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat makes mew mew as a WrongCat" << std::endl;
}
