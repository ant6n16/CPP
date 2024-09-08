/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:02:56 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/08 15:19:07 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &src)
{
    (void)src;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const &src)
{
    (void)src;
    return *this;
}

AForm *makePresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm *makeRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm *makeShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    AForm *(*form[3])(std::string target) = {makePresidentialPardonForm, makeRobotomyRequestForm, makeShrubberyCreationForm};
    
    std::string formNames[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    for (int i = 0; i < 3; i++)
    {
        if (name == formNames[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            return form[i](target);
        }
    }
    throw Intern::FormNotFoundException();
}

const char *Intern::FormNotFoundException::what() const throw()
{
    return "Intern cannot create the Form: Form not found";
}
