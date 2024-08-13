/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:28:18 by antdelga          #+#    #+#             */
/*   Updated: 2024/08/13 19:35:41 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <fstream>
# include <map>

# define DEBUG		"[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-picklespecial-ketchup burger.\nI really do!\n"
# define INFO		"[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"
# define WARNING	"[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n"
# define ERROR		"[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n"

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