/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie_class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:23:08 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/03 08:48:58 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include	<iostream>
#include	<string>

class Zombie
{
private:
	std::string	_name;
	
public:
	Zombie(std::string name);
	~Zombie(void);
	
	void	announce(void);
};


#endif