/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:42:57 by antdelga          #+#    #+#             */
/*   Updated: 2024/08/15 12:59:21 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

int main()
{
	ScavTrap	a;
	FlagTrap	b("Antonio");
	ClapTrap	c("Pedro");

    std::cout << std::endl;
    a.attack("Juan");
    std::cout << std::endl;

    std::cout << std::endl;
	b.highFivesGuys();
    std::cout << std::endl;
    
    std::cout << std::endl;
	b.beRepaired(3);
    std::cout << std::endl;
    
    std::cout << std::endl;
	b.attack("Juan");
	a.attack("Juan");
    std::cout << std::endl;

    std::cout << std::endl;
    a.guardGate();
    a.attack("Juan");
    std::cout << std::endl;

    return (0);
}