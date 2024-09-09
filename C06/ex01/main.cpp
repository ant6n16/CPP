/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:32:47 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/08 21:37:26 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// int main()
// {
//     Data data;
//     data.s1 = "Hello";
//     data.n = 42;
//     data.s2 = "World";

//     uintptr_t raw = Serializer::serialize(&data);
//     Data* ptr = Serializer::deserialize(raw);

//     std::cout << "s1: " << ptr->s1 << std::endl;
//     std::cout << "n: " << ptr->n << std::endl;
//     std::cout << "s2: " << ptr->s2 << std::endl;

//     return 0;
// }

int main() {
    // Creamos un objeto de tipo Data
    Data data;
    data.s1 = "Hello";
    data.n = 42;
    data.s2 = "World";
    
    std::cout << "Original Data:" << std::endl;
    std::cout << "Value: " << data.s1 << ", Name: " << data.s2 << std::endl;

    // Serializamos el puntero a Data convirtiéndolo a un número entero
    uintptr_t serialized = Serializer::serialize(&data);
    std::cout << "Serialized Data: " << serialized << std::endl;

    // Deserializamos el entero de nuevo a un puntero de tipo Data
    Data* deserialized = Serializer::deserialize(serialized);
    std::cout << "Deserialized Data:" << std::endl;
    std::cout << "Value: " << deserialized->s1 << ", Name: " << deserialized->s2 << std::endl;

    return 0;
}