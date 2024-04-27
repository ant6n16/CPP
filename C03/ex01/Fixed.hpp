/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:06:41 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/27 15:13:27 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float n);
        Fixed(const Fixed &copy);
        ~Fixed();

        Fixed &operator=(const Fixed &copy);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

    private:
        int _value;
        static const int _bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif