/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:48:59 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/09 11:56:35 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    srand(time(NULL));
	Base *p = generator();
	Base *a = new A;
	Base *b = new B;
	Base *c = new C;
	Base *null = nullptr;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "The A: " << std::endl;
	identify(a);
	identify(*a);
	std::cout << "The B: " << std::endl;
	identify(b);
	identify(*b);
	std::cout << "The C: " << std::endl;
	identify(c);
	identify(*c);
	std::cout << "---------------------------------" << std::endl;
	std::cout << "The null: " << std::endl;
	identify(null);
	identify(*null);
	std::cout << "---------------------------------" << std::endl;
	std::cout << "The random: " << std::endl;
	identify(p);
	identify(*p);
	delete a;
	delete b;
	delete c;
	delete p;
	return 0;
}
