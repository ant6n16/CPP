/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:27:12 by antdelga          #+#    #+#             */
/*   Updated: 2024/07/03 20:16:44 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::setIndex(int i)
{
	this->index = i;
}

std::string Contact::addInfo(std::string msg)
{
	bool checker = false;
	std::string field;
	
	while (!checker){
		std::cout << msg;
		std::getline(std::cin, field);
		if (!field.empty())
			checker = true;
		else
		{
			std::cin.clear();
			std::cout << "Please, enter a valid value. The field cannot be empty" << std::endl;
		}
	}
	return field;
}

void Contact::setValues(void)
{
	std::cin.ignore();
	this->firstName = addInfo("Enter the FIRST NAME: ");
	this->lastName = addInfo ("Enter the LAST NAME: ");
	this->nickName = addInfo("Enter the NICKNAME: ");
	this->phoneNumber = addInfo ("Enter the PHONE NUMBER: ");
	this->darkSecret = addInfo ("Enter the DARKEST SECRET: ");
	std::cout << "\n";
	std::cout << "Contact created! " << std::endl << std::endl;
}

std::string Contact::cropValue(std::string field)
{
	std::string result;
	int i = 0;

	while (field[i])
	{
		if (i == 9){
			result.push_back('.');
			break;
		}
		result.push_back(field[i]);
		i++;
	}
	return (result);
}

void Contact::print(void)
{
	if (this->firstName.empty())
		return ;
	std::cout << "|" << std::setw(10) << this->index << std::flush;
	std::cout << "|" << std::setw(10) << this->cropValue(this->firstName) << std::flush;
	std::cout << "|" << std::setw(10) << this->cropValue(this->lastName) << std::flush;
	std::cout << "|" << std::setw(10) << this->cropValue(this->nickName) << std::flush;
	std::cout << "|" << std::endl;
}

void Contact::displayContact(void)
{
    std::cout << "Index:  " << this->index <<  std::endl;
    std::cout << "First Name:  " << this->firstName <<  std::endl;
    std::cout << "Last Name:  " << this->lastName <<  std::endl;
    std::cout << "Nickname:  " << this->nickName <<  std::endl;
    std::cout << "Phone Number:  " << this->phoneNumber <<  std::endl;
    std::cout << "Darkest Secret:  " << this->darkSecret <<  std::endl << std::endl;
}