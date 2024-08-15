/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:35:45 by antdelga          #+#    #+#             */
/*   Updated: 2024/08/15 13:14:12 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    return ;
}

Harl::~Harl()
{
    return ;
}

void	Harl::debug(void)
{
	std::cout << DEBUG << std::endl;
}

void	Harl::info(void)
{
	std::cout << INFO << std::endl;
}

void	Harl::warning(void)
{
	std::cout << WARNING << std::endl;
}

void	Harl::error(void)
{
	std::cout << ERROR << std::endl;
}

void	Harl::complain(std::string level)
{
    int i;
    
	std::string	instructions[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*execute[4])() = \
    {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (i = 0; i < 4;  i++)
		if (instructions[i].compare(level) == 0)
			(this->*execute[i])();
}
