/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:11:42 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/27 15:43:54 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Original constructor" << std::endl;
    this->_value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor" << std::endl;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor" << std::endl;
    this->_value = n << this->_bits;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor" << std::endl;
    this->_value = copy._value;
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

Fixed::Fixed(const float n)
{
    std::cout << "Float constructor" << std::endl;
    this->_value = roundf(n * (1 << this->_bits));
}

float Fixed::toFloat(void) const
{
    return ((float)this->_value / (1 << this->_bits));
}

int Fixed::toInt(void) const
{
    return (this->_value >> this->_bits);
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Assignation operator" << std::endl;
    this->_value = copy._value;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}
