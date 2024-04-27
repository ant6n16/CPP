/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:04:40 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/27 13:03:55 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl    harl;
    
    harl.complain("DEBUG");
    harl.complain("ERROR");
    harl.complain("WARNING");
    harl.complain("INFO");
    
    return (0);
}