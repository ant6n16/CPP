/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:28:38 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/23 19:46:17 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string command;
    
    while (1) 
    {
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);
        
        if (command == "ADD") {
            Contact contact;
        
            std::string firstName;
            std::string lastName;
            std::string nickname;
            std::string phoneNumber;
            std::string darkestSecret;

            std::cout << "Enter first name: ";
            std::getline(std::cin, firstName);
            contact.setFirstName(firstName);

            std::cout << "Enter last name: ";
            std::getline(std::cin, lastName);
            contact.setLastName(lastName);

            std::cout << "Enter nickname: ";
            std::getline(std::cin, nickname);
            contact.setNickname(nickname);

            std::cout << "Enter phone number: ";
            std::getline(std::cin, phoneNumber);
            contact.setPhone(phoneNumber);

            std::cout << "Enter darkest secret: ";
            std::getline(std::cin, darkestSecret);
            contact.setDarkestSecret(darkestSecret);

            phonebook.add_contact(contact);
            std::cout << "Contact created successfully." << std::endl;
        }
        else if (command == "SEARCH") 
            phonebook.search_contact();
        else if (command == "EXIT") 
            break;
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }
    return (0);
}