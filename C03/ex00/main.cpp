/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:42:57 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/10 12:28:51 by antdelga         ###   ########.fr       */
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
        ClapTrap claptrap;
        ClapTrap claptrap2("Manolo");
        ClapTrap claptrap3(claptrap2);
        ClapTrap claptrap4("Pepe");

        std::cout << "Name: " << claptrap.getName() << std::endl;
        std::cout << "Name: " << claptrap2.getName() << std::endl;
        std::cout << "Name: " << claptrap3.getName() << std::endl;
        std::cout << "Name: " << claptrap4.getName() << std::endl << std::endl;

        claptrap = claptrap2;
        claptrap3 = claptrap4;
        std::cout << "New name: " << claptrap.getName() << std::endl;
        std::cout << "New name 3: " << claptrap3.getName() << std::endl;
    }
    return (0);
}