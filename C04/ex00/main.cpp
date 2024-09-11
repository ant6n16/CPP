/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:24:12 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/11 10:09:42 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        std::cout << std::endl << "************** TEST 1 **************" << std::endl;
        const Animal *meta = new Animal("Dog");
        const Animal *j = new Dog();
        const Animal *i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        j->makeSound();
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        std::cout << meta->getType() << " " << std::endl;
        meta->makeSound();
        
        delete i;
        delete j;
        delete meta;
    }
    
    std::cout << std::endl;
    std::cout << std::endl;

    {
        std::cout << "************** TEST 2 **************" << std::endl;
        const WrongAnimal *metaWrong = new WrongAnimal();
        const WrongAnimal *iWrong = new WrongCat();
        
        std::cout << iWrong->getType() << " " << std::endl;
        iWrong->makeSound();
        std::cout << metaWrong->getType() << " " << std::endl;
        metaWrong->makeSound();
        
        delete metaWrong;
        delete iWrong;
    }

    std::cout << std::endl;
    std::cout << std::endl;

    {
        std::cout << "************** TEST 3 **************" << std::endl;
        Animal* animal1 = new Dog();
        Animal* animal2 = new Cat();

        animal1->makeSound(); // Llama a Perro::hacerSonido()
        animal2->makeSound(); // Llama a Gato::hacerSonido()

        delete animal1;
        delete animal2;
    }

    return 0;
}