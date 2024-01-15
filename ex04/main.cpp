/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:48:54 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/01/15 11:49:13 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileManipulation.hpp"

int main(int argc, char **argv)
{
  if (argc != 4)
  {
    std::cerr << "Error: Invalid number of arguments" << std::endl;
    return (0);
  }
  FileManipulation fileManipulation(argv[1], argv[2], argv[3]);
  fileManipulation.processFile();
  return (0);
}