/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 22:55:25 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/08 16:49:28 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    std::cout << std::endl << "***** TEST 1 *****" << std::endl;
    {
        try
        {
            Intern someRandomIntern;
            AForm* rrf;
            AForm* rrf2;
            AForm* rrf3;
            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            rrf2 = someRandomIntern.makeForm("shrubbery creation", "Bender2");
            rrf3 = someRandomIntern.makeForm("shrubbery creation", "Bender3");            
            Bureaucrat b("Bender", 1);
            
            std::cout << std::endl << std::endl << "***Sign forms***" << std::endl;
            rrf->beSigned(b);
            std::cout << std::endl;
            b.signForm(*rrf2);
            std::cout << std::endl;
            b.signForm(*rrf3);

            std::cout << std::endl << std::endl << "***Execute forms***" << std::endl;
            b.executeForm(*rrf);
            std::cout << std::endl;
            rrf2->execute(b);
            std::cout << std::endl;
            rrf3->execute(b);

            delete rrf;
            delete rrf2;
            delete rrf3;
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
            Intern someRandomIntern;
            AForm* rrf;
            rrf = someRandomIntern.makeForm("aaaaaa", "Bender4");
      
            Bureaucrat b("Bender", 1);
            b.signForm(*rrf);
            rrf->execute(b);

            delete rrf;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return (0);
}
