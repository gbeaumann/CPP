/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie_class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:52:49 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/03 09:15:00 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include	<iostream>
#include	<string>

class	Zombie
{
	private:
		std::string	_name;
	
	public:
		Zombie(void);
		~Zombie(void);
		
		void	setName(std::string name);
		void	announce(void);
};

#endif