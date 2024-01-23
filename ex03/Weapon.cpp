/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:27:43 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/01/16 14:55:09 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
  this->type = type;
}

Weapon::~Weapon(){}

const std::string& Weapon::getType()
{
  return type;
}

void  Weapon::setType(std::string newType)
{
  type = newType;
}