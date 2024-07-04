/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:46:49 by antdelga          #+#    #+#             */
/*   Updated: 2024/07/03 20:54:07 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int numZombies;

	numZombies = 6;
	Zombie* zombies = zombieHorde(numZombies, "Antonio");
	for(int i = 0; i < numZombies; i++)
	{
		zombies[i].announce();
		std::cout << std::endl;
	}
	delete[] zombies;
	return (0);
}