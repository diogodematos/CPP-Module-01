/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 11:06:34 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/12/22 12:39:19 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
//#include <string>

class Zombie
{
	private:
		
		std::string	name;

	public:

		Zombie(std::string name);
		~Zombie(void);
		
		void	announce(void) const;
		
};

#endif