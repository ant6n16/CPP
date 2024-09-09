/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:37:23 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/09 11:58:36 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() 
{    
}

Base *generator(void)
{
    int random = rand() % 3;

    switch (random) 
    {
        case 0:
            return new A;
        case 1:
            return new B;
        default:
            return new C;
    }
}

void identify(Base *p)
{
    try
    {
        if (dynamic_cast<A*>(p))
            std::cout << "Base A" << std::endl;
        else if (dynamic_cast<B*>(p))
            std::cout << "Base B" << std::endl;
        else if (dynamic_cast<C*>(p))
            std::cout << "Base C" << std::endl;
        else
            std::cout << "Unknown class" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void identify (Base &p)
{
    try
	{
		if (A *a = dynamic_cast<A*>(&p))
			std::cout << "A" << std::endl;
		else if (B *b = dynamic_cast<B*>(&p))
			std::cout << "B" << std::endl;
		else if (C *c = dynamic_cast<C*>(&p))
			std::cout << "C" << std::endl;
		else
			std::cout << "Unknown" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
