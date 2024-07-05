/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:12:19 by antdelga          #+#    #+#             */
/*   Updated: 2024/07/05 12:32:48 by antdelga         ###   ########.fr       */
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
	std::cout << GREEN DEBUG DEFAULT;
}

void	Harl::info(void)
{
	std::cout << GRAY INFO DEFAULT;
}

void	Harl::warning(void)
{
	std::cout << YELLOW WARNING DEFAULT;
}

void	Harl::error(void)
{
	std::cout << RED ERROR DEFAULT;
}

void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*function[4])(void);
    
    function[0] = &Harl::debug;
    function[1] = &Harl::info;
    function[2] = &Harl::warning;
    function[3] = &Harl::error;

    for (int i = 0; i < 4; i++) 
	{
        if (levels[i] == level) 
		{
            (this->*function[i])();
            break;
        }
    }
}

void Harl::filterLevel(std::string levelFilter) 
{
    std::map<std::string, int> levelMap;
    levelMap["DEBUG"] = 0;
    levelMap["INFO"] = 1;
    levelMap["WARNING"] = 2;
    levelMap["ERROR"] = 3;

    std::map<std::string, int>::iterator it = levelMap.find(levelFilter);
    if (it == levelMap.end())
	{
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return ;
    }
    
    switch (it->second)
	{
        case 0:
            this->complain("DEBUG");
        case 1:
            this->complain("INFO");
        case 2:
            this->complain("WARNING");
        case 3:
            this->complain("ERROR");
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}