/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:56:54 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/23 19:59:26 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie();
        
        void	announce(void);

    private:
        std::string _name;
        std::string _type;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif