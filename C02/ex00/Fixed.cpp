/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:11:42 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/27 14:41:53 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Original constructor" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor" << std::endl;
    this->_value = copy._value;
}

Fixed::~Fixed()
{
    std::cout << "Destructor" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Assignation operator" << std::endl;
    this->_value = copy._value;
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function" << std::endl;
    this->_value = raw;
}