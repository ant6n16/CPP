/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:24:12 by antdelga          #+#    #+#             */
/*   Updated: 2024/08/15 14:10:46 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << std::endl;
    std::cout << j->getType() << " " << std::endl;
    j->makeSound();
	std::cout << i->getType() << " " << std::endl;
    i->makeSound();
	std::cout << meta->getType() << " " << std::endl;
    meta->makeSound();
    std::cout << std::endl;
    
    delete i;
    delete j;
    delete meta;
    
    std::cout << std::endl;

    const WrongAnimal *metaWrong = new WrongAnimal();
	const WrongAnimal *iWrong = new WrongCat();
    
    std::cout << std::endl;
	std::cout << iWrong->getType() << " " << std::endl;
	iWrong->makeSound();
    std::cout << metaWrong->getType() << " " << std::endl;
    metaWrong->makeSound();
    std::cout << std::endl;
    
	delete metaWrong;
	delete iWrong;

    return 0;
}