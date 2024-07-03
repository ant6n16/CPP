/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:29:12 by antdelga          #+#    #+#             */
/*   Updated: 2024/07/03 20:23:27 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
# include <iostream>
# include <iomanip>

class Contact 
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string darkSecret;
		int			index;

        std::string addInfo(std::string msg);
		std::string cropValue(std::string field);
	
	public:
		Contact();
		~Contact();
		
        void setIndex(const int i);
        void setValues(void);
		void print(void);
		void displayContact(void);
};

#endif