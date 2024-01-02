/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:32:11 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/01/02 15:37:16 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

int main()
{
  Weapon  top;
  Weapon  baga;
  std::cout << "top type: " << top.getType() << std::endl;
  top.setType("roca");
  std::cout << "top type: " << top.getType() << std::endl;
  std::cout << "baga type: " << baga.getType() << std::endl;
  baga.setType("espada");
  std::cout << "baga type: " << baga.getType() << std::endl;
  return (0);
}