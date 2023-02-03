/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:29:12 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/03 09:33:09 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"HumanB_class.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << this->_name << " arrived bare handed" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->_name << " died form old age" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	std::cout << this->_name << " picked up " << this->_weapon->getType() << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}