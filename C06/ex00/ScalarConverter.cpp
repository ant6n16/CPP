/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:05:56 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/08 21:21:21 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() 
{    
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &) 
{
}

void ScalarConverter::convert(const std::string &str) {
	
	std::string type = getType(str);
    // std::cout << type << std::endl;

    if (str.length() == 1 && !isdigit(str[0]))
	{
        std::cout << "char: '" << str[0] << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
	}
    else if (str == "nanf" || str == "inff" || str == "+inff" || str == "-inff")
	{
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << std::stof(str) << std::endl;
        std::cout << "double: " << static_cast<double>(std::stof(str)) << std::endl;
	}
    else if (str == "nan" || str == "inf" || str == "-inf" || str == "+inf")
	{
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << static_cast<float>(std::stod(str)) << "f" << std::endl;
        std::cout << "double: " << std::stod(str) << std::endl;
	}
    else if (type == "impossible")
	{
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
	}
    else if (type == "float")
	{
		try
		{
			float tmp = std::stof(str);
			if (tmp >= 32 && tmp < 127)
                std::cout << "char: '" << static_cast<char>(tmp) << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
                
			if (tmp >= INT_MIN && tmp <= INT_MAX)
                std::cout << "int: " << static_cast<int>(tmp) << std::endl;
            else
                std::cout << "int: impossible" << std::endl;

            std::cout << "float: " << tmp << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(tmp) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: impossible" << std::endl;
            std::cout << "double: impossible" << std::endl;
		}
	}
    else if (type == "double")
	{
		try
		{
			double tmp = std::stod(str);
            if (tmp >= 32 && tmp < 127)
                std::cout << "char: '" << static_cast<char>(tmp) << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;

            if (tmp >= INT_MIN && tmp <= INT_MAX)
                std::cout << "int: " << static_cast<int>(tmp) << std::endl;
            else
                std::cout << "int: impossible" << std::endl;

            if (tmp >= std::numeric_limits<float>::lowest() && tmp <= std::numeric_limits<float>::max())
            {
                if ((static_cast<int>(tmp) == tmp))
                    std::cout << "float: " << static_cast<float>(tmp) << ".0f" << std::endl;
                else
                    std::cout << "float: " << static_cast<float>(tmp) << "f" << std::endl;
            }
            else
                std::cout << "float: impossible" << std::endl;


            if (tmp >= std::numeric_limits<double>::lowest() && tmp <= std::numeric_limits<double>::max())
            {
                if ((static_cast<int>(tmp) == tmp))
                    std::cout << "double: " << tmp << ".0" << std::endl;   
                else
                    std::cout << "double: " << tmp << std::endl;
            }
            else
                std::cout << "double: impossible" << std::endl;
		}
		catch (std::exception &e)
		{
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: impossible" << std::endl;
            std::cout << "double: impossible" << std::endl;
		}
	}
    else if (type == "int")
	{
		try
		{
            int tmp = std::stoi(str);
            if (tmp >= 32 && tmp < 127)
                std::cout << "char: '" << static_cast<char>(tmp) << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;

            std::cout << "int: " << tmp << std::endl;
            std::cout << "float: " << static_cast<float>(tmp) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(tmp) << ".0" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: impossible" << std::endl;
            std::cout << "double: impossible" << std::endl;
		}
	}
}

std::string ScalarConverter::getType(const std::string &str)
{
	bool has_dot = false;

	for (unsigned long i = 0; i < str.length(); i++)
	{
		if (str[i] == '.')
		{
			if (has_dot || i == 0 || str[i + 1] == '\0' || str[i + 1] == 'f')
				 return "impossible";
			has_dot = true;
		}
		else if (!isdigit(str[i]))
		{
			if (str[i] == 'f' && i == str.length() - 1)
				return "float";
			else if (i == 0 && (str[i] == '-' || str[i] == '+'))
				continue;
			else
				return "impossible";
		}
	}
	if (has_dot)
		return "double";
	else
		return "int";
}