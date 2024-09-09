/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:04:09 by antdelga          #+#    #+#             */
/*   Updated: 2024/09/08 20:52:53 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <limits>
# include <cmath>
#include <iomanip>

class ScalarConverter {
public:
    static void convert(const std::string &str);

private:
    ScalarConverter(); 
    ScalarConverter(const ScalarConverter &); 
    ScalarConverter &operator=(const ScalarConverter &);
    ~ScalarConverter();

    // std::string ScalarConverter::_getType();
    static std::string getType(const std::string &str);
};


#endif
