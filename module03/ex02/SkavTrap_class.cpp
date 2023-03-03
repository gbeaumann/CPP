/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SkavTrap_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:47:45 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/23 15:30:34 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"SkavTrap_class.hpp"

SkavTrap::SkavTrap(void) : ClapTrap()
{
	std::cout << "SkavTrap default constructor called" << std::endl;
	this->_Hit_points = ClapTrap::_Hit_points;
	this->_Energy_points = ClapTrap::_Energy_points;
	this->_Attack_dmg = ClapTrap::_Attack_dmg;
}

SkavTrap::SkavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "SkavTrap " << this->_Name << " was created!" << std::endl;
	this->_Hit_points = ClapTrap::_Hit_points;
	this->_Energy_points = ClapTrap::_Energy_points;
	this->_Attack_dmg = ClapTrap::_Attack_dmg;
}

SkavTrap::~SkavTrap(void)
{
	std::cout << "SkavTrap " << this->_Name << " was destroyed!" << std::endl;
}

SkavTrap	&SkavTrap::operator=(const SkavTrap &rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

SkavTrap::SkavTrap(const SkavTrap &rhs) : ClapTrap(rhs)
{
	*this = rhs;
}

void	SkavTrap::attack(const	std::string	&target)
{
	if (this->_Energy_points > 0)
	{
		this->_Energy_points--;
		std::cout << "SkavTrap " << this->_Name << " attacked " << target << " for " << this->_Attack_dmg << " damage points" << std::endl;
	}
	else if (this->_Energy_points <= 0)
		std::cout << "SkavTrap " << this->_Name << " has no more energy..." << std::endl;
}

void	SkavTrap::guardGate(void)
{
	std::cout << "SkavTrap " << this->_Name << " has entered the mighty Guard Gate mode!    But it does nothing..." << std::endl;
	std::cout << "So... here, " << "SkavTrap " << this->_Name << " has " << this->_Energy_points << " energy left" << std::endl;
}
