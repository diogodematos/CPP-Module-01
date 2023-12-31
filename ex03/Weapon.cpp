/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:27:43 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/01/02 15:45:18 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
  this->type = type;
}

Weapon::~Weapon(){}

std::string Weapon::getType()
{
  return type;
}

void  Weapon::setType(std::string newType)
{
  type = newType;
}