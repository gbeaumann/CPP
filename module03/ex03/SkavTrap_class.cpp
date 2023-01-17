/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SkavTrap_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:47:45 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/16 19:26:05 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"SkavTrap_class.hpp"

SkavTrap::SkavTrap(void) : ClapTrap()
{
	std::cout << "SkavTrap Default constructor called" << std::endl;
	this->_Hit_points = 150;
	this->_Energy_points = 60;
	this->_Attack_dmg = 30;
}

SkavTrap::SkavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "SkavTrap " << this->_Name << " was created!" << std::endl;
	this->_Hit_points = 150;
	this->_Energy_points = 60;
	this->_Attack_dmg = 30;
}

SkavTrap::~SkavTrap(void)
{
	std::cout << "SkavTrap " << this->_Name << " was destroyed!" << std::endl;
}

SkavTrap	&SkavTrap::operator=(const SkavTrap &copy)
{
	if (this != &copy)
		ClapTrap::operator=(copy);
	return (*this);
}

SkavTrap::SkavTrap(const SkavTrap &copy)
{
	*this = copy;
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