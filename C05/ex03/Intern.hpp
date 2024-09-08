/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:02:09 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/08 15:22:02 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern
{
    public:
        Intern();
        Intern(Intern const &src);
        ~Intern();

        Intern &operator=(Intern const &src);

        AForm *makeForm(std::string name, std::string target);

        class FormNotFoundException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

#endif
