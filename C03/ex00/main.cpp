/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:42:57 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/06 12:11:36 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    {
        ClapTrap claptrap("ClapTrap");

        std::cout << "Name: " << claptrap.getName() << std::endl;
        std::cout << "Hit Points: " << claptrap.getHitPoints() << std::endl;
        std::cout << "Energy Points: " << claptrap.getEnergyPoints() << std::endl;
        std::cout << "Attack Damage: " << claptrap.getAttackDamage() << std::endl;

        std::cout << std::endl;
        claptrap.attack("target");
        claptrap.takeDamage(5);
        claptrap.beRepaired(3);

        std::cout << std::endl;
        std::cout << "Name: " << claptrap.getName() << std::endl;
        std::cout << "Hit Points: " << claptrap.getHitPoints() << std::endl;
        std::cout << "Energy Points: " << claptrap.getEnergyPoints() << std::endl;
        std::cout << "Attack Damage: " << claptrap.getAttackDamage() << std::endl;

    }

    return (0);
}