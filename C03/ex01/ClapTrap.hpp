/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:10:36 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/10 12:21:38 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &src);
        ~ClapTrap();

        ClapTrap &operator=(ClapTrap const &src);

        void	attack(std::string const &target);
        void	takeDamage(unsigned int amount);
        void	beRepaired(unsigned int amount);

        std::string		getName() const;
        int	getHitPoints() const;
        int	getEnergyPoints() const;
        int	getAttackDamage() const;

    protected:
        std::string	_name;
        int			_hit_points;
        int			_energy_points;
        int			_attack_damage;
};

#endif