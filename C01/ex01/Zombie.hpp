/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:56:54 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/23 20:45:04 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();
        
        void	announce(void);
        void    setName(std::string name);

    private:
        std::string _name;
};

#endif