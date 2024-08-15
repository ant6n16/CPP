/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:41:11 by antdelga          #+#    #+#             */
/*   Updated: 2024/08/15 12:48:53 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FlagTrap : public ClapTrap
{
    public:
        FlagTrap();
        FlagTrap(std::string name);
        FlagTrap(FlagTrap const &src);
        ~FlagTrap();

        FlagTrap &operator=(FlagTrap const &src);

        void    highFivesGuys(void);
};

#endif