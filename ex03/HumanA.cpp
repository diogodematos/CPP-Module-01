/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:51:38 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/01/02 18:30:47 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& w) : name(name), weapon(w) {}

// HumanA::HumanA(std::string name, Weapon w)
// {
//   this->name = name;
//   this->weapon = w;
// }

HumanA::~HumanA(){}

void  HumanA::attack()
{
  std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}