/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:42:57 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/27 19:43:02 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("ClapTrap");
    ClapTrap claptrap2(claptrap);

    claptrap.attack("target");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    claptrap2.attack("target");
    claptrap2.takeDamage(5);
    claptrap2.beRepaired(3);

    return (0);
}