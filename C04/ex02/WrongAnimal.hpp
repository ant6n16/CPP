/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:49:59 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/11 12:07:50 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &src);
        virtual ~WrongAnimal();

        WrongAnimal &operator=(WrongAnimal const &src);

        std::string getType() const;
        virtual void makeSound() const = 0;

    protected:
        std::string _type;
};

#endif
