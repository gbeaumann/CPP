/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon_class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 09:46:30 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/03 09:33:44 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

#include	<iostream>
#include	<string>

class	Weapon
{
	private:
		std::string	_type;
	
	public:
		Weapon(std::string	type);
		~Weapon(void);
		std::string const &getType(void);
		void	setType(std::string weapon_type);
};

#endif