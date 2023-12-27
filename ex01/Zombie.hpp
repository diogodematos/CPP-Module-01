/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 14:47:49 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/27 14:32:47 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie{
  
  private:
    
    std::string name;

  public:

    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);
    
    void announce(void);
};

#endif