/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:52:19 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/23 19:46:29 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
    private:
        Contact _contactos[8];
        int     _index;
        
    public:
        PhoneBook(void);
        ~PhoneBook();

        void add_contact(Contact contact);
        void search_contact(void);
        std::string truncateString(const std::string str);
};

#endif