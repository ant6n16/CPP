/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:21:11 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/11 10:44:22 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
    for (int i = 0; i < 100; ++i) 
    {
        _ideas[i] = src._ideas[i];
    }
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = src._ideas[i];
    }
    std::cout << "Brain assignation operator called" << std::endl;
    return *this;
}

void Brain::setIdea(int index, std::string idea)
{
    if (index >= 0 && index < 100)
        this->_ideas[index] = idea;
    else
        std::cout << "Index out of range" << std::endl;
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return this->_ideas[index];
    return "Index out of range";
}
