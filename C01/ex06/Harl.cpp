/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:12:19 by antdelga          #+#    #+#             */
/*   Updated: 2024/08/15 13:19:28 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
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
    
	std::string	instruction[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*execute[4])() = \
    {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (i = 0; i < 4;  i++)
		if (instruction[i].compare(level) == 0)
			(this->*execute[i])();
}

void		Harl::filterLevel(std::string levelFilter)
{
    int i;
    
	std::string	type[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4;  i++)
		if (type[i].compare(levelFilter) == 0)
			break;
            
    switch (i)
	{
        case 0:
            this->complain("DEBUG");
        case 1:
            this->complain("INFO");
        case 2:
            this->complain("WARNING");
        case 3:
            this->complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
