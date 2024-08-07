/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:04:40 by antdelga          #+#    #+#             */
/*   Updated: 2024/07/04 20:21:19 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replace(std::string &read, const std::string &s1, const std::string &s2)
{
    if (s1.empty())
    {
        return;
    }
    
    std::string result;
    size_t pos = 0;
    size_t prev_pos = 0;
    
    while ((pos = read.find(s1, pos)) != std::string::npos)
    {
        result.append(read, prev_pos, pos - prev_pos);
        result += s2;
        pos += s1.length();
        prev_pos = pos;
    }
    
    result.append(read, prev_pos, std::string::npos);
    read.swap(result);
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
    std::ofstream outputFile((std::string(argv[1]) + ".replace").c_str());
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