/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 00:40:36 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/08 12:32:28 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5), _target("Default Target")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Form", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src), _target(src._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
    if (this != &src)
    {
        AForm::operator=(src);
        this->_target = src._target;
    }
    return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
    return _target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!this->getSigned())
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > this->getExecGrade())
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << "PresidentialPardonForm executed by " << executor.getName() << std::endl;
        std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
    }
}
