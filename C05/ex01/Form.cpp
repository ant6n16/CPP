/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:24:18 by antdelga          #+#    #+#             */
/*   Updated: 2024/10/02 18:16:57 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default Form"), _signGrade(150), _execGrade(150)
{
    _signed = false;
    std::cout << "Form " << _name << " created with " << _signGrade << " sign grade and " << _execGrade << " exec grade" << std::endl;
}

Form::Form(std::string name) : _name(name), _signGrade(150), _execGrade(150)
{
    _signed = false;
    std::cout << "Form " << _name << " created with " << _signGrade << " sign grade and " << _execGrade << " exec grade" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
    if (signGrade < 1 || execGrade < 1)
        throw Form::GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw Form::GradeTooLowException();
    _signed = false;
    std::cout << "Form " << _name << " created with " << _signGrade << " sign grade and " << _execGrade << " exec grade" << std::endl;
}

Form::Form(Form const &src) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
    _signed = src._signed;
    std::cout << "Form " << _name << " created by copy with " << _signGrade << " sign grade and " << _execGrade << " exec grade" << std::endl;
}

Form::~Form()
{
    std::cout << "Form " << _name << " destroyed" << std::endl;
}

Form &Form::operator=(Form const &src)
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

std::string Form::getName() const
{
    return _name;
}

bool Form::getSigned() const
{
    return _signed;
}

int Form::getSignGrade() const
{
    return _signGrade;
}

int Form::getExecGrade() const
{
    return _execGrade;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (this->_signed)
        throw Form::FormAlreadySignedException();
    else if (bureaucrat.getGrade() > this->_signGrade) 
    {
        throw Form::GradeTooLowException();
    }
    this->_signed = true;
    std::cout << bureaucrat.getName() << " signs " << _name << std::endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Form Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form Grade is too low";
}

const char *Form::FormAlreadySignedException::what() const throw()
{
    return "Form is already signed";
}

std::ostream &operator<<(std::ostream &o, Form const &src)
{
    o << src.getName() << " is ";
    if (src.getSigned())
        o << "signed and requires grade " << src.getExecGrade() << " to be executed";
    else
        o << "not signed and requires grade " << src.getSignGrade() << " to be signed and grade " << src.getExecGrade() << " to be executed";
    return o;
}
