/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:55:33 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/23 20:55:45 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    public:
        Weapon(std::string type);
        Weapon();
        ~Weapon();
        
        std::string const &getType(void);
        void    setType(std::string type);

    private:
        std::string _type;
};

#endif