/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:24:43 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/01/15 14:27:52 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
  private:
    
    void  debug(void);
    void  info(void);
    void  warning(void);
    void  error(void);

  public:
  
  Harl(void);
  ~Harl(void);
  
  void  complain(std::string level);
};

#endif