/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:09:41 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/27 14:34:16 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
  Zombie* horde = new Zombie[N];
  
  for (int i = 0; i < N; i++)
  {
    horde[i] = Zombie(name);
  }
  return horde;
}