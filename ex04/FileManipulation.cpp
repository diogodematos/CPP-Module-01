/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileManipulation.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:05:15 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/01/15 11:54:21 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileManipulation.hpp"

FileManipulation::FileManipulation(std::string filename, std::string s1, std::string s2) : filename(filename), s1(s1), s2(s2) {}

void  FileManipulation::processFile()
{
  std::ifstream inFile(filename.c_str());
  if(!inFile.is_open())
  {
    std::cerr << "Error: Unable to open input file" << filename << std::endl;
    return;
  } 
  
  std::ofstream outFile((filename + ".replace").c_str());
  if(!outFile.is_open())
  {
    std::cerr << "Error: Unable to create output file" << filename + ".replace" << std::endl;
    return;
  }

  std::string line;
  while (std::getline(inFile, line))
  {
    std::size_t pos = 0;
    std::size_t found = line.find(s1, pos);
    while (found != std::string::npos)
    {
      outFile << line.substr(pos, found - pos) << s2;
      pos = found + s1.length();
      found = line.find(s1, pos);
    }
    outFile << line.substr(pos, found - pos) << std::endl;
  }
  std::cout << "File " << filename << " has been successfully processed" << std::endl;
  inFile.close();
  outFile.close();
}