/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:20:26 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/11 12:05:18 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    public:

        Brain();
        Brain(Brain const &src);
        ~Brain();

        Brain &operator=(Brain const &src);

        void setIdea(int index, std::string idea);
        std::string getIdea(int index) const;

    private:
            std::string _ideas[100];
};

#endif
