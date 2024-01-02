/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:32:11 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/01/02 17:33:25 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
 {
  Weapon club = Weapon("crude spiked club");
  HumanA bob("Bob", club);
  bob.attack();
  club.setType("some other type of club");
  bob.attack();
  }
  {
  Weapon club = Weapon("crude spiked club");
  HumanB jim("Jim");
  jim.setWeapon(club);
  jim.attack();
  club.setType("some other type of club");
  jim.attack();
  }
  return 0;
}

// int main()
// {
//   Weapon  top = Weapon("macete");
//   Weapon  baga = Weapon("pistola");
//   HumanA Jon = HumanA("Jon", baga);
//   Jon.attack();
//   HumanB Bob = HumanB("Bob");
//   Bob.setWeapon(top);
//   std::cout << "top type: " << top.getType() << std::endl;
//   top.setType("roca");
//   std::cout << "top type: " << top.getType() << std::endl;
//   std::cout << "baga type: " << baga.getType() << std::endl;
//   baga.setType("espada");
//   std::cout << "baga type: " << baga.getType() << std::endl;
//   Bob.attack();
//   return (0);
// }