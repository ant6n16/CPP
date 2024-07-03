/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:29:32 by antdelga          #+#    #+#             */
/*   Updated: 2024/07/03 20:33:40 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->full = false;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add(void)
{
	Contact newContact = Contact();
	newContact.setValues();
	newContact.setIndex(this->index);
	this->contacts[this->index] = newContact;
	if (this->index < 7)
		this->index++;
 	else
	{
		this->index = 0;
		this->full = true;
	}
}

void PhoneBook::showContacts(void)
{
	int	size;

	std::cout << " -------------------------------------------" << std::endl;
	std::cout << " " << std::setw(10) << std::left << "Index" << std::flush;
	std::cout << " "<< std::setw(10) << std::left << "FirstName" << std::flush;
	std::cout << " "<< std::setw(10) << std::left << "LastName" << std::flush;
	std::cout << " "<< std::setw(10) << std::left << "NickName" << std::flush;
	std::cout << " " << std::endl;
	std::cout << " -------------------------------------------" << std::endl;
	if (this->full)
		size = 7;
	else
		size = this->index;
	for(int i = 0; i <= size; i++){
		this->contacts[i].print();
	}
	std::cout << std::endl << std::endl;
}

int	PhoneBook::checkIndex(int size)
{
	bool	checker;
	int		index;
		
	checker = false;
	while (!checker){
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Select the index of the contact to display: ";
		std::cin >> index;
		std::cout << std::endl;
		if (index < 0 || index >= size || !std::cin.good())
			std::cout << "The selected index is not correct.\n";
		else
			checker = true;
	}
	return index;
}

void PhoneBook::search(void)
{
	int		size;
	int		i;

	if (this->full)
		size = 8;
	else if (this->index == 0)
		size = 0;
	else
		size = this->index;
	showContacts();
	if (size > 0)
	{
		i = checkIndex(size);
		this->contacts[i].displayContact();
	}
	else
		std::cout << "There are no contacts in Phonebook" << std::endl << std::endl;;
}