/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:24:12 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/11 12:10:12 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

    // //Daria error por instanciar clase abstracta:
	// const Animal *meta = new Animal();
	// delete meta;
    
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	
    std::cout << std::endl;
    
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
    
	i->makeSound();
	j->makeSound();

	delete j;
	delete i;
    return 0;
}
