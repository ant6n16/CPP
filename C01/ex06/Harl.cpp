/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:12:19 by antdelga          #+#    #+#             */
/*   Updated: 2024/08/13 19:35:11 by antdelga         ###   ########.fr       */
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

void Harl::complain(std::string level)
{
    std::map<std::string, void (Harl::*)()> functionMap;
    functionMap["DEBUG"] = &Harl::debug;
    functionMap["ERROR"] = &Harl::error;
    functionMap["WARNING"] = &Harl::warning;
    functionMap["INFO"] = &Harl::info;

    std::map<std::string, void (Harl::*)()>::iterator it = functionMap.find(level);
    if (it != functionMap.end()) 
        (this->*(it->second))();
    else 
        std::cerr << "Error: Wrong level\n";
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
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}