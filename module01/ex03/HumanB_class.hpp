/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB_class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:22:40 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/03 09:33:06 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

#include	<iostream>
#include	<string>
#include	"Weapon_class.hpp"

class		HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;

	public:
		HumanB(std::string name);
		~HumanB(void);
		
		void	setWeapon(Weapon &weapon);
		void	attack(void);
		
};

#endif