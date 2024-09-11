/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:24:52 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/10 13:15:49 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:
        Animal();
        Animal(std::string type);
        Animal(Animal const &src);
        virtual ~Animal();

        Animal &operator=(Animal const &src);

        std::string getType() const;
        virtual void makeSound() const;

    protected:
        std::string _type;
};

#endif
