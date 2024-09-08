/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 00:55:42 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/08 12:51:52 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45), _target("Default Target")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src), _target(src._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
    if (this != &src)
    {
        AForm::operator=(src);
        this->_target = src._target;
    }
    return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
    return _target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this->getSigned())
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > this->getExecGrade())
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << "RobotomyRequestForm executed by " << executor.getName() << std::endl;
        std::cout << "*drilling noises*" << std::endl;
        if (rand() % 2 == 0)
            std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
        else
            std::cout << this->getTarget() << " has failed to be robotomized." << std::endl;
    }
}
