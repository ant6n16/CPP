/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:24:18 by antdelga          #+#    #+#             */
/*   Updated: 2024/10/02 18:19:42 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default Form"), _signGrade(150), _execGrade(150)
{
    _signed = false;
    std::cout << "Form " << _name << " created with " << _signGrade << " sign grade and " << _execGrade << " exec grade" << std::endl;
}

AForm::AForm(std::string name) : _name(name), _signGrade(150), _execGrade(150)
{
    _signed = false;
    std::cout << "Form " << _name << " created with " << _signGrade << " sign grade and " << _execGrade << " exec grade" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
    if (signGrade < 1 || execGrade < 1)
        throw AForm::GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw AForm::GradeTooLowException();
    _signed = false;
    std::cout << "Form " << _name << " created with " << _signGrade << " sign grade and " << _execGrade << " exec grade" << std::endl;
}

AForm::AForm(AForm const &src) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
    this->_signed = src._signed;
    std::cout << "Form " << _name << " created by copy with " << _signGrade << " sign grade and " << _execGrade << " exec grade" << std::endl;
}

AForm::~AForm()
{
    std::cout << "Form " << _name << " destroyed" << std::endl;
}

AForm &AForm::operator=(AForm const &src)
{
    if (this != &src)
    {
        this->_name = src._name;
        this->_signed = src._signed;
        this->_signGrade = src._signGrade;
        this->_execGrade = src._execGrade;
    }
    return *this;
}

std::string AForm::getName() const
{
    return _name;
}

bool AForm::getSigned() const
{
    return _signed;
}

int AForm::getSignGrade() const
{
    return _signGrade;
}

int AForm::getExecGrade() const
{
    return _execGrade;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (this->_signed)
        throw AForm::FormAlreadySignedException();
    else if (bureaucrat.getGrade() > this->_signGrade) 
    {
        throw AForm::GradeTooLowException();
    }
    this->_signed = true;
    std::cout << bureaucrat.getName() << " signs " << _name << std::endl;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Form Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Form Grade is too low";
}

const char *AForm::FormAlreadySignedException::what() const throw()
{
    return "Form is already signed";
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return "Form can't be executed because is not signed";
}

std::ostream &operator<<(std::ostream &o, AForm const &src)
{
    o << src.getName() << " is ";
    if (src.getSigned())
        o << "signed and requires grade " << src.getExecGrade() << " to be executed";
    else
        o << "not signed and requires grade " << src.getSignGrade() << " to be signed and grade " << src.getExecGrade() << " to be executed";
    return o;
}
