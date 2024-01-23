/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:32:35 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/01/16 15:01:50 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
  Harl  harl;

  if (argc != 2)
  {
    std::cout << "Usage: ./harl <level>" << std::endl;
    return (1);
  }
  harl.complain(argv[1]);
  return (0);
}