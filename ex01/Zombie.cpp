/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:53:07 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/27 14:34:08 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
  this->name = name;
  //std::cout << "Zombie: " << name << " Created" << std::endl;
}

Zombie::~Zombie(void)
{
  //std::cout << "Zombie: " << name << " Deleted" << std::endl;
}

void  Zombie::announce(void)
{
  std::cout << name << ": Brainzzzzzzz" << std::endl;
}

Zombie::Zombie(void) {}