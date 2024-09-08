/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 22:55:25 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/08 01:04:48 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << std::endl << "***** TEST 1 *****" << std::endl;
    {
        try
        {
            Bureaucrat b1("Antonio", 1);
            std::cout << b1 << std::endl;
            Bureaucrat b2("Pedro", 150);
            std::cout << b2 << std::endl;
            Form f1("Nº 1", 100, 10);
            std::cout << f1 << std::endl;
            try
            {
                f1.beSigned(b1);
                std::cout << f1 << std::endl;
                f1.beSigned(b1);
                std::cout << f1 << std::endl;

            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << std::endl << "***** TEST 2 *****" << std::endl;
    {
        try
        {
            Bureaucrat b1("Antonio", 1);
            std::cout << b1 << std::endl;
            Bureaucrat b2("Pedro", 150);
            std::cout << b2 << std::endl;
            Form f1("Nº 1", 100, 10);
            std::cout << f1 << std::endl;
            try
            {
                f1.beSigned(b2);
                std::cout << f1 << std::endl;
                f1.beSigned(b2);
                // b2.signForm(f1);
                std::cout << f1 << std::endl;

            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << std::endl << "***** TEST 3 *****" << std::endl;
    {
        try
        {
            Bureaucrat b1("Antonio", 1);
            std::cout << b1 << std::endl;
            Bureaucrat b2("Pedro", 150);
            std::cout << b2 << std::endl;
            Form f1("Nº 1", 100, 10);
            std::cout << f1 << std::endl;
            try
            {
                f1.beSigned(b1);
                std::cout << f1 << std::endl;
                f1.beSigned(b2);
                std::cout << f1 << std::endl;

            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    return (0);
}
