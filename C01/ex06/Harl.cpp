/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:35:45 by antdelga          #+#    #+#             */
/*   Updated: 2024/07/04 20:39:27 by antdelga         ###   ########.fr       */
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

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-\
picklespecial-ketchup burger.\nI really do!\n";
}

void    Harl::error(void)
{
    std::cerr << "This is unacceptable! I want to speak to the manager now.\n";
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. \
I’ve been coming for years whereas you started working here since last month.\n";
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. \
You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
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
    {
        (this->*(it->second))();
    }
    else 
    {
        std::cerr << "Error: Wrong level\n";
    }
}

int		Harl::level(std::string level)
{
    std::map<std::string, int> levelMap;
    levelMap["DEBUG"] = 0;
    levelMap["INFO"] = 1;
    levelMap["WARNING"] = 2;
    levelMap["ERROR"] = 3;

    std::map<std::string, int>::iterator it = levelMap.find(level);
    if (it != levelMap.end()) 
        return (it->second);
    else
        return (-1);

}
