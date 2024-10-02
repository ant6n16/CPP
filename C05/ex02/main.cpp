/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 22:55:25 by antdelga          #+#    #+#             */
/*   Updated: 2024/10/02 18:33:54 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    std::cout << std::endl << "***** TEST 1 *****" << std::endl;
    {
        try
        {
            std::cout << "***Create bureaucrats and forms***" << std::endl;
            Bureaucrat b1("Antonio", 1);
            PresidentialPardonForm f1("Gonzalo");
            RobotomyRequestForm f2("Administracion");
            ShrubberyCreationForm f3("Home");
            std::cout << f1 << std::endl;
            std::cout << f2 << std::endl;
            std::cout << f3 << std::endl << std::endl << std::endl;

            std::cout << "***Sign forms***" << std::endl;
            b1.signForm(f1);
            b1.signForm(f2);
            b1.signForm(f3);
            std::cout << f1 << std::endl;
            std::cout << f2 << std::endl;
            std::cout << f3 << std::endl << std::endl << std::endl;

            std::cout << "***Execute forms from execute method***" << std::endl;
            f1.execute(b1);
            std::cout << std::endl;
            f2.execute(b1);
            std::cout << std::endl;
            f3.execute(b1);
            std::cout << std::endl << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    std::cout << std::endl << "***** TEST 2 *****" << std::endl;
    {
        try
        {
            std::cout << "***Create bureaucrats and forms***" << std::endl;
            Bureaucrat b1("Pedro", 30);
            PresidentialPardonForm f1("Mar");
            RobotomyRequestForm f2("Sanidad");
            ShrubberyCreationForm f3("Garden");
            std::cout << f1 << std::endl;
            std::cout << f2 << std::endl;
            std::cout << f3 << std::endl << std::endl << std::endl;

            std::cout << "***Sign forms***" << std::endl;
            b1.signForm(f1);
            b1.signForm(f2);
            b1.signForm(f3);
            std::cout << f1 << std::endl;
            std::cout << f2 << std::endl;
            std::cout << f3 << std::endl << std::endl << std::endl;
            
            std::cout << "***Execute forms from executeForm method***" << std::endl;
            b1.executeForm(f1);
            std::cout << std::endl;
            b1.executeForm(f2);
            std::cout << std::endl;
            b1.executeForm(f3);
            std::cout << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    std::cout << std::endl << "***** TEST 3 *****" << std::endl;
    {
        try
        {
            std::cout << "***Create bureaucrats and forms***" << std::endl;
            Bureaucrat b1("Pedro", 10);
            PresidentialPardonForm f1("Mar");
            RobotomyRequestForm f2("Sanidad");
            ShrubberyCreationForm f3("Home");
            std::cout << f1 << std::endl;
            std::cout << f2 << std::endl;
            std::cout << f3 << std::endl << std::endl << std::endl;

            std::cout << "***Sign forms***" << std::endl;
            b1.signForm(f1);
            b1.signForm(f2);
            b1.signForm(f3);
            std::cout << f1 << std::endl;
            std::cout << f2 << std::endl;
            std::cout << f3 << std::endl << std::endl << std::endl;
            
            std::cout << "***Execute forms from executeForm method***" << std::endl;
            b1.executeForm(f1);
            std::cout << std::endl;
            b1.executeForm(f2);
            std::cout << std::endl;
            b1.executeForm(f3);
            std::cout << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return (0);
}
