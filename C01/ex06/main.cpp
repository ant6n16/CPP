/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:04:40 by antdelga          #+#    #+#             */
/*   Updated: 2024/07/04 20:45:17 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl    harl;
    int     level;

    if (argc != 2)
    {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return (1);
    }
    level = harl.level(argv[1]);
    switch (level)
    {
        case 0:
            std::cout << "[ DEBUG ]\n";
            harl.complain("DEBUG");
            std::cout << std::endl;
            [[fallthrough]];  // Fall through intentionally

        case 1:
            std::cout << "[ INFO ]\n";
            harl.complain("INFO");
            std::cout << std::endl;
            [[fallthrough]];  // Fall through intentionally

        case 2:
            std::cout << "[ WARNING ]\n";
            harl.complain("WARNING");
            std::cout << std::endl;
            [[fallthrough]];  // Fall through intentionally

        case 3:
            std::cout << "[ ERROR ]\n";
            harl.complain("ERROR");
            std::cout << std::endl;
            break;
            
        default:
            std::cout << "[Probably complaining about insignificant problems]\n";
    }

    return (0);
}