/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:24:12 by antdelga          #+#    #+#             */
/*   Updated: 2024/08/15 20:33:55 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // const int arraySize = 10;
    // Animal *animals[arraySize];

    // for (int i = 0; i < arraySize; i++) {
    //     if (i < arraySize / 2) {
    //         animals[i] = new Dog();
    //     } else {
    //         animals[i] = new Cat();
    //     }
    // }

    // std::cout << std::endl;

    // for (int i = 0; i < arraySize; i++) {
    //     animals[i]->makeSound();
    // }

    // std::cout << std::endl;

    // for (int i = 0; i < arraySize; i++) {
    //     delete animals[i];
    // }

    // std::cout << std::endl;


    std::cout <<  "--- Test for deep copy ---" << std::endl;
    Cat *cat2 = new Cat();
    cat2->setIdea(0, "Hmm... fish!");
    cat2->setIdea(1, "I wanna play...");
    std::cout << cat2->getIdea(0) << std::endl;
    std::cout << cat2->getIdea(1) << std::endl;

    std::cout <<  "--- Making a deep copy ---" << std::endl;
    Cat *cat3 = new Cat(*cat2);
    std::cout << cat2->getIdea(0) << std::endl;
    std::cout << cat3->getIdea(0) << std::endl;
    std::cout << cat2->getIdea(1) << std::endl;
    std::cout << cat3->getIdea(1) << std::endl;
    cat2->setIdea(2, "Gotta sleep now...");
    std::cout << cat2->getIdea(2) << std::endl;
    std::cout << cat3->getIdea(2) << std::endl;
    
    std::cout <<  "--- Copy assignment operator ---" << std::endl;
    Cat *cat4 = new Cat();
    *cat4 = *cat3;
    std::cout << cat3->getIdea(0) << std::endl;
    std::cout << cat4->getIdea(0) << std::endl;
    std::cout << cat3->getIdea(1) << std::endl;
    std::cout << cat4->getIdea(1) << std::endl;
    cat3->setIdea(2, "Miumiu!");
    std::cout << cat3->getIdea(2) << std::endl;
    std::cout << cat4->getIdea(2) << std::endl;
    
    delete cat2;
    delete cat3;
    delete cat4;

    return 0;
}