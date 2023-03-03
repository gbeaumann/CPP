/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap_class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:22:31 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/23 15:31:16 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

#include	<iostream>
#include	<string>

class 	ClapTrap
{
	private:
		
	protected:
		ClapTrap(void);
		ClapTrap(const ClapTrap &rhs);
		ClapTrap	&operator=(const ClapTrap &rhs);
		std::string	_Name;
		int			_Hit_points;
		int			_Energy_points;
		int			_Attack_dmg;

	public:
		ClapTrap(std::string name);
		virtual	~ClapTrap(void);
		
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
