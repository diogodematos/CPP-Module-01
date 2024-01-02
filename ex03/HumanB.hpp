/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:03:53 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/01/02 18:29:15 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
private:
  
  std::string name;
  Weapon *weapon;
  
public:
  HumanB(std::string name);
  ~HumanB();

  void attack();
  void setWeapon(Weapon& weapon);
};

#endif