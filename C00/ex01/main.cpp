/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:29:22 by antdelga          #+#    #+#             */
/*   Updated: 2024/07/03 20:25:08 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

std::string ft_toupper(std::string str)
{
	std::string upper = str;

	for (int i = 0; str[i]; i++){
		upper[i] = (char) toupper(str[i]);
	}
	return (upper);
}

int	main()
{
	PhoneBook phonebook = PhoneBook();
	std::string input;
	
	while (1)
	{
		std::cout << "Please, enter a command: ";
		std::cin >> input;
		if (!ft_toupper(input).compare("EXIT"))
			break;
		if (!ft_toupper(input).compare("ADD"))
			phonebook.add();
		else if (!ft_toupper(input).compare("SEARCH"))
			phonebook.search();
	}
	return (0);
}
