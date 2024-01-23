/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:23:15 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/01/16 14:54:50 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
private:
  
  std::string type;
  
public:

  Weapon(std::string type);
  ~Weapon();

  const std::string& getType();
  void setType(std::string newType);
  
};

#endif
