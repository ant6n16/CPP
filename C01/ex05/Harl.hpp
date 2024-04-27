/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:28:18 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/27 12:41:41 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <fstream>
# include <map>

class Harl
{
    private:
        void debug(void);
        void error(void);
        void warning(void);
        void info(void);
    
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};

#endif