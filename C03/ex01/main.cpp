/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:42:57 by antdelga          #+#    #+#             */
/*   Updated: 2024/08/15 12:37:57 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	a;
	ScavTrap	b("Antonio");
	ClapTrap	c("Pedro");

    std::cout << std::endl;
    a.attack("Juan");
    std::cout << std::endl;

    std::cout << std::endl;
	b.takeDamage(10000000);
    std::cout << std::endl;
    
    std::cout << std::endl;
	b.beRepaired(3);
    std::cout << std::endl;
    
    std::cout << std::endl;
	b.attack("Juan");
	a.attack("Juan");
    std::cout << std::endl;

    std::cout << std::endl;
    b.guardGate();
    a.guardGate();
    a.attack("Juan");
    std::cout << std::endl;

    return (0);
}