/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 00:58:22 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/08 12:37:46 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", 145, 137), _target("Default Target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src), _target(src._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
    if (this != &src)
    {
        AForm::operator=(src);
        this->_target = src._target;
    }
    return *this;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return _target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!this->getSigned())
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > this->getExecGrade())
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << "ShrubberyCreationForm executed by " << executor.getName() << std::endl;
        std::ofstream file((this->getTarget() + "_shrubbery"));
        if (file.is_open())
        {
            file << "      /\\      " << std::endl;
            file << "     /\\*\\     " << std::endl;
            file << "    /\\O\\*\\    " << std::endl;
            file << "   /*/\\/\\/\\   " << std::endl;
            file << "  /\\O\\/\\*\\/\\  " << std::endl;
            file << " /\\*\\/\\*\\/\\/\\ " << std::endl;
            file << "/\\O\\/\\/*/\\/O/\\" << std::endl;
            file << "      ||      " << std::endl;
            file << "      ||      " << std::endl;
            file << "      ||      " << std::endl;
            file.close();
            std::cout << "Shrubbery created in " << this->getTarget() << "_shrubbery file" << std::endl;
        }
    }
}
