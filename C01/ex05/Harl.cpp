/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:35:45 by antdelga          #+#    #+#             */
/*   Updated: 2024/08/13 19:36:06 by antdelga         ###   ########.fr       */
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
