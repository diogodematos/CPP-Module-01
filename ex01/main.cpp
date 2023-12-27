/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:18:10 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/27 14:40:06 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
  int zombieNumber = 5;
  std::string zombieName = "tobias";
  Zombie* zombieArmy = zombieHorde(zombieNumber, zombieName);
  for ( int i = 0; i < zombieNumber; ++i)
  {
    zombieArmy[i].announce();
  }
  delete[] zombieArmy;
  return(0);
}