/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 09:59:51 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/03 09:33:50 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Weapon_class.hpp"
#include	<iostream>
#include	<string>

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << this->getType() << " is found" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << this->_type << " falls on the ground" << std::endl;
}

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
	std::cout << "new type: " << this->_type << std::endl;
}

	std::string const	&Weapon::getType(void)
{
	return (this->_type);
}