/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:17:02 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/23 19:45:43 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    _index = 0;
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::add_contact(Contact contact)
{
    _contactos[_index % 8] = contact;
    _index++;
}

std::string PhoneBook::truncateString(const std::string str)
{
    if (str.length() > 10)
    {
        return str.substr(0, 9) + ".";
    }
    return str;
}

void PhoneBook::search_contact(void)
{
    int index = _index % 8;
    int loc;
    
    if (index == 0)
    {
        std::cout << "Your phonebook is empty." << std::endl << std::endl;
        return;
    }
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
    for (int i = 0; (i < index); i++)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << truncateString(_contactos[i].getFirstName()) << "|";
        std::cout << std::setw(10) << truncateString(_contactos[i].getLastName()) << "|";
        std::cout << std::setw(10) << truncateString(_contactos[i].getNickname()) << "|" << std::endl;
    }
    std::cout << "Enter the index of the entry to display: ";
    if (!(std::cin >> loc) || loc < 0 || loc >= index) 
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
    else
    {
        std::cout << "First Name: " << _contactos[loc].getFirstName() << std::endl;
        std::cout << "Last Name: " << _contactos[loc].getLastName() << std::endl;
        std::cout << "Nickname: " << _contactos[loc].getNickname() << std::endl;
        std::cout << "Phone Number: " << _contactos[loc].getPhone() << std::endl;
        std::cout << "Darkest Secret: " << _contactos[loc].getDarkestSecret() << std::endl;
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


