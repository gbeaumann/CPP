/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA_class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:30:36 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/03 09:33:26 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

#include	"Weapon_class.hpp"
#include	<iostream>
#include	<string>

class	HumanA
{
	private:
		std::string	_name;
		Weapon	&_weapon;
	
	public:
		HumanA(std::string	name, Weapon &type);
		~HumanA(void);
		
		void	attack(void);
};
#endif
