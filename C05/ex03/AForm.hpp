/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 23:02:51 by antdelga          #+#    #+#             */
/*   Updated: 2024/10/01 19:58:41 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <fstream>
#include <cstdlib>

class Bureaucrat;

class AForm
{
    private:
        std::string _name;
        bool _signed;
        int _signGrade;
        int _execGrade;

    public:
        AForm();
        AForm(std::string name);
        AForm(std::string name, int signGrade, int execGrade);
        AForm(AForm const &src);
        virtual ~AForm();

        AForm &operator=(AForm const &src);

        std::string getName() const;
        bool getSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;

        void beSigned(const Bureaucrat& bureaucrat);
        virtual void execute(Bureaucrat const &executor) const = 0;

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class FormAlreadySignedException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &o, AForm const &src);

#endif