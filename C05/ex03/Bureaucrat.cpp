/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 22:47:27 by antdelga          #+#    #+#             */
/*   Updated: 2024/10/02 18:37:47 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    _name = "Default Bureaucrat";
    _grade = 150;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name)
{
    _grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name), _grade(src._grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
    if (this != &src)
    {
        this->_name = src.getName();
        this->_grade = src.getGrade();
    }
    return *this;
}

std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void Bureaucrat::incrementGrade()
{
    if (_grade - 1 < 1)
    {
        throw Bureaucrat::GradeTooHighException();
        return ;
    }
    _grade--;
}

void Bureaucrat::decrementGrade()
{
    if (_grade + 1 > 150)
    {
        throw Bureaucrat::GradeTooLowException();
        return ;
    }
    _grade++;
}

void Bureaucrat::signForm(AForm &form)
{
    try 
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    } 
    catch (const std::exception &e) 
    {
        std::cout << this->getName() << " couldn't sign " << form.getName() 
                  << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &form) const
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " cannot execute this " << form.getName() << " because " << e.what() << '\n';
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Bureaucrat Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Bureaucrat Grade is too low";
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src)
{
    o << src.getName() << ", bureaucrat grade " << src.getGrade();
    return o;
}
