/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:11:42 by antdelga          #+#    #+#             */
/*   Updated: 2024/08/14 13:52:28 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = n << this->_bits;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_value = copy._value;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;
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
    std::cout << "Copy assigment operator called" << std::endl;
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

Fixed &Fixed::operator++(void)
{
    this->_value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed &Fixed::operator--(void)
{
    this->_value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp);
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
