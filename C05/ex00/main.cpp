/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 22:55:25 by antdelga          #+#    #+#             */
/*   Updated: 2024/10/02 17:59:52 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("Antoine", 1);
        std::cout << b1 << std::endl;
        b1.incrementGrade();
        std::cout << b1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat b2("Antoine", 150);
        std::cout << b2 << std::endl;
        b2.decrementGrade();
        std::cout << b2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat b3("Antoine", 150);
        std::cout << b3 << std::endl;
        b3.incrementGrade();
        std::cout << b3 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat b4("Antoine", 1);
        std::cout << b4 << std::endl;
        b4.decrementGrade();
        std::cout << b4 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat b4("Antoine", 1);
        Bureaucrat b5(b4);
        std::cout << b5 << std::endl;
        b5.incrementGrade();
        std::cout << b5 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat b4("Antoine", 1);
        Bureaucrat b5("Hola");
        
        std::cout << b5 << std::endl;
        b5 = b4;
        std::cout << b5 << std::endl;
        b5.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}
