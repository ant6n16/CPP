/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:01:55 by antdelga          #+#    #+#             */
/*   Updated: 2024/08/11 21:31:02 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* zombie1 = newZombie("Zombie1");
    zombie1->announce();
    
    randomChump("Zombie2");
    zombie1->~Zombie();
    return (0);
}