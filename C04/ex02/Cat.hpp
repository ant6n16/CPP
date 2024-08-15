/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:34:11 by antdelga          #+#    #+#             */
/*   Updated: 2024/08/15 19:56:45 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const &src);
        ~Cat();

        Cat &operator=(Cat const &src);

        void makeSound() const;
        void setIdea(int index, std::string idea);
        std::string getIdea(int index) const;

    private:
        Brain *_brain;
};

#endif