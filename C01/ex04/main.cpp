/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:04:40 by antdelga          #+#    #+#             */
/*   Updated: 2024/04/27 12:23:21 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void    replace(std::string &read, std::string s1, std::string s2)

{
    size_t  pos = 0;
    while ((pos = read.find(s1, pos)) != std::string::npos)
    {
        read.replace(pos, s1.length(), s2);
        pos += s2.length();
    }
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return (1);
    }
    std::ifstream inputFile(argv[1]);
    if (!inputFile.is_open())
    {
        std::cerr << "Error: Can't open file" << std::endl;
        return (1);
    }
    std::ofstream outputFile(argv[1] + std::string(".replace"));
    if (!outputFile.is_open())
    {
        std::cerr << "Error: Can't create file" << std::endl;
        return (1);
    }
    std::string read;
    char        actual;
    actual = inputFile.get();
    while (inputFile.good())
    {
        read += actual;
        actual = inputFile.get();
    }
    replace(read, argv[2], argv[3]);
    outputFile << read;
    inputFile.close();
    outputFile.close();
    return (0);
}