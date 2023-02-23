/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie_class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:52:49 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/21 10:01:31 by gbeauman         ###   ########.fr       */
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

Zombie	*zombieHorde(int N, std::string name);

#endif