/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:42:57 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/10 11:29:19 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    {
        ClapTrap claptrap("Antonio");

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
    {
        std::cout << std::endl;
        ClapTrap claptrap("Manolo");
        ClapTrap claptrap2(claptrap);
        ClapTrap claptrap3("Pepe");

        std::cout << "Name: " << claptrap.getName() << std::endl;
        std::cout << "Name: " << claptrap2.getName() << std::endl;
        std::cout << "Name: " << claptrap3.getName() << std::endl;
        claptrap3 = claptrap;
        std::cout << "New name: " << claptrap3.getName() << std::endl;
    }
    return (0);
}