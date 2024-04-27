/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:38:44 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/23 18:50:23 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone;
        std::string _darkest_secret;
    
    public:
        /* CONSTRUCTOR AND DESTRUCTOR*/
        Contact(void);
        ~Contact();

        /* SET METHODS*/
        void setFirstName(std::string first_name);
        void setLastName(std::string last_name);
        void setNickname(std::string nickname);
        void setPhone(std::string phone);
        void setDarkestSecret(std::string darkest_secret);

        /* GET METHODS */
        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        std::string getPhone();
        std::string getDarkestSecret();
};

#endif