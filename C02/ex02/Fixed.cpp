/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:11:42 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/27 19:07:19 by antdelga         ###   ########.fr       */
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

float Fixed::operator+(const Fixed &copy) const
{
    return (this->toFloat() + copy.toFloat());
}

float Fixed::operator-(const Fixed &copy) const
{
    return (this->toFloat() - copy.toFloat());
}

float Fixed::operator*(const Fixed &copy) const
{
    return (this->toFloat() * copy.toFloat());
}

float Fixed::operator/(const Fixed &copy) const
{
    return (this->toFloat() / copy.toFloat());
}

bool Fixed::operator>(const Fixed &copy) const
{
    return (this->toFloat() > copy.toFloat());
}

bool Fixed::operator<(const Fixed &copy) const
{
    return (this->toFloat() < copy.toFloat());
}

bool Fixed::operator>=(const Fixed &copy) const
{
    return (this->toFloat() >= copy.toFloat());
}

bool Fixed::operator<=(const Fixed &copy) const
{
    return (this->toFloat() <= copy.toFloat());
}

bool Fixed::operator==(const Fixed &copy) const
{
    return (this->toFloat() == copy.toFloat());
}

bool Fixed::operator!=(const Fixed &copy) const
{
    return (this->toFloat() != copy.toFloat());
}

float Fixed::operator++(int)
{
    float tmp = this->toFloat();
    this->_value++;
    return (tmp);
}

float Fixed::operator++()
{
    this->_value++;
    return (this->toFloat());
}

float Fixed::operator--(int)
{
    float tmp = this->toFloat();
    this->_value--;
    return (tmp);
}

float Fixed::operator--()
{
    this->_value--;
    return (this->toFloat());
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}







std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}
