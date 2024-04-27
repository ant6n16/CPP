/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:06:41 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/27 14:06:52 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &copy);
        ~Fixed();

        Fixed &operator=(const Fixed &copy);

        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int _value;
        static const int _bits = 8;
};

#endif