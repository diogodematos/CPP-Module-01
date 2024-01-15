/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileManipulation.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:53:14 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/01/15 11:04:47 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEMANIPULATION_HPP
# define FILEMANIPULATION_HPP

#include <iostream>
#include <string>
#include <fstream>

class FileManipulation
{
private:
  
  std::string filename;
  std::string s1;
  std::string s2;
  
public:

  FileManipulation(std::string filename, std::string s1, std::string s2);
  void  processFile();
  
};

#endif