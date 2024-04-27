/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:46:49 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/23 20:52:45 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* ptr = &str;
	std::string& ref = str;

	std::cout << "Address of str:" << &str << std::endl;
	std::cout << "Address of ptr:" << ptr << std::endl;
	std::cout << "Address of ref:" << &ref << std::endl;

	std::cout << "Value of str:" << str << std::endl;
	std::cout << "Value of ptr:" << *ptr << std::endl;
	std::cout << "Value of ref:" << ref << std::endl;

	return (0);
}