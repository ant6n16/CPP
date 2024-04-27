/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:01:55 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/23 20:03:38 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* zombie = newZombie("Zombie1");
    zombie->announce();
    
    randomChump("Zombie2");
    zombie->~Zombie();
    return (0);
}