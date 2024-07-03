/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:29:48 by antdelga          #+#    #+#             */
/*   Updated: 2024/07/03 20:23:18 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include <limits>
# include "Contact.hpp"

class PhoneBook 
{
	private:
		Contact	contacts[8];
		int		index;
		bool	full;
		void	showContacts();
		int		checkIndex(int size);

	public:
		PhoneBook();
		~PhoneBook();

		void	add();
		void	search();
};

#endif