/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:17:27 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/11 12:19:06 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Default")
{
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria of type " << type << " constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &copy) : _type(copy._type)
{
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &src)
{
    if (this != &src)
        this->_type = src._type;
    std::cout << "AMateria Assignation operator called" << std::endl;
    return *this;
}

std::string const &AMateria::getType() const
{
    return this->_type;
}

void AMateria::use(ICharacter &target)
{
    std::cout << "AMateria use on " << target.getName() << std::endl;
}
