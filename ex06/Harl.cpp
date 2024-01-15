/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:29:39 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/01/15 16:09:10 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void  Harl::complain(std::string level)
{
  void  (Harl::*complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  for (int i = 0; i < 5; i++)
  {
    if (levels[i] == level || i == 4)
    {
      for (int j = i; j < 5; j++)
      {
        switch(j)
        {
          case 0:
            (this->*complain[0])();
            break;
          case 1:
            (this->*complain[1])();
            break;
          case 2:
            (this->*complain[2])();
            break;
          case 3:
            (this->*complain[3])();
            return;
          default:
          std::cerr <<  "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
        }
      }
    }
  }
  //std::cerr << "Error: No match level" << std::endl;
}

void  Harl::debug(void)
{
  std::cout << "[ DEBUG ]" << std::endl;
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl; 
  std::cout << "I really do!\n" << std::endl;
}

void  Harl::info(void)
{
  std::cout << "[ INFO ]" << std::endl;
  std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
  std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
  std::cout << "If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void  Harl::warning(void)
{
  std::cout << "[ WARNING ]" << std::endl;
  std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
  std::cout << "I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void  Harl::error(void)
{
  std::cout << "[ ERROR ]" << std::endl;
  std::cout << "This is unacceptable!" << std::endl;
  std::cout << "I want to speak to the manager now." << std::endl;
}