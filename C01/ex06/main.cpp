/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:12:10 by antdelga          #+#    #+#             */
/*   Updated: 2024/07/05 12:35:16 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string ft_toupper(std::string str){
	std::string upper = str;

	for (int i = 0; str[i]; i++){
		upper[i] = (char) toupper(str[i]);
	}
	return (upper);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl harl;
		harl.filterLevel(ft_toupper(argv[1]));
	}
	else
		std::cout << "You have pass a parameter: DEBUG, INFO, WARNING, ERROR" << std::endl;
	return (0);
}
