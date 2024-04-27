/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:46:49 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/23 20:47:26 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
#include <climits>

std::string	cin_plus(std::string str)
{
	std::string	input;
	bool		valid = false;

	while (!valid)
	{
		std::cout << str;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			valid = true;
		else if (std::cin.eof())
			exit(0);
		else
			std::cerr << "Invalid input; please try again.\n";
		std::cin.clear();
	}
	return(input);
}

int		getintinput(std::string str)
{
	std::string	strinput;
	int			input;
	bool		valid = false;

	while (!valid)
	{
		strinput = cin_plus(str);
		valid = true;
		for (size_t _ = 0; _ < strinput.length(); _++)
		{
			if (!std::isdigit(strinput[_]))
			{
				std::cerr << "Invalid input; please enter a valid integer.\n";
				valid = false;
				break ;
			}
		}
		if (valid)
		{
			input = std::atoi(strinput.c_str());			
			if (input > INT_MAX || input < 0)
			{
				std::cerr << "Input out of range; please try 0 to " << INT_MAX << ".\n";
				valid = false;
			}
		}
	}
	return(input);
}

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int	size;

	size = getintinput("Number of Zombies: ");
	Zombie *horde = zombieHorde(size ,cin_plus("Zombies name: "));
	std::cout << "\nCalling announce()\n";
	for (int i = 0; i < size; i++)
		horde[i].announce();
	std::cout << "\nFreeing allocated memory on heap\n";
	delete [] horde;
}