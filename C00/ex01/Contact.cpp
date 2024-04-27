/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:50:19 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/23 18:50:24 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/* ----------------- CONSTRUCTOR AND DESTRUCTOR ----------------- */
Contact::Contact()
{
}
Contact::~Contact()
{
}

/* ----------------- GET FUNCTIONS ----------------- */
std::string Contact::getFirstName()
{
    return (_first_name);
}
std::string Contact::getLastName()
{
    return (_last_name);
}
std::string Contact::getNickname()
{
    return (_nickname);
}
std::string Contact::getPhone()
{
    return (_phone);
}
std::string Contact::getDarkestSecret()
{
    return (_darkest_secret);
}

/* ----------------- SET FUNCTIONS ----------------- */
void Contact::setFirstName(std::string first_name)
{
    _first_name = first_name;
}
void Contact::setLastName(std::string last_name)
{
    _last_name = last_name;
}
void Contact::setNickname(std::string nickname)
{
    _nickname = nickname;
}
void Contact::setPhone(std::string phone)
{
    _phone = phone;
}
void Contact::setDarkestSecret(std::string darkest_secret)
{
    _darkest_secret = darkest_secret;
}
