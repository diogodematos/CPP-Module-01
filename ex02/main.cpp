/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:52:33 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/27 15:03:07 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
  std::string string = "HI THIS IS BRAIN";
  std::string *stringPTR = &string;
  std::string &stringREF = string;

  std::cout << "string memory address: " << &string << std::endl;
  std::cout << "string pointer memory address: " << stringPTR << std::endl;
  std::cout << "string reference memory address: " << &stringREF << std::endl;

  std::cout << "string value: " << string << std::endl;
  std::cout << "string pointer value: " << *stringPTR << std::endl;
  std::cout << "string reference value: " << stringREF << std::endl;
  
}