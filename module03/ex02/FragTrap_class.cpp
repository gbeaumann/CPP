/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:30:29 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/23 13:55:25 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"FragTrap_class.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_Hit_points = ClapTrap::_Hit_points;
	this->_Energy_points = ClapTrap::_Energy_points;
	this->_Attack_dmg = ClapTrap::_Attack_dmg;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << this->_Name << " is created!" << std::endl;
	this->_Hit_points = ClapTrap::_Hit_points;
	this->_Energy_points = ClapTrap::_Energy_points;
	this->_Attack_dmg = ClapTrap::_Attack_dmg;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

FragTrap::FragTrap(const FragTrap &rhs) : ClapTrap(rhs)
{
	*this = rhs;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_Name << " was destroyed!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_Name << " ask anybody for a high five!" << std::endl;
}

void	FragTrap::attack(const	std::string	&target)
{
	if (this->_Energy_points > 0)
	{
		this->_Energy_points--;
		std::cout << "FragTrap " << this->_Name << " attacked " << target << " for " << this->_Attack_dmg << " damage points" << std::endl;
	}
	else if (this->_Energy_points <= 0)
		std::cout << "FragTrap " << this->_Name << " has no more energy..." << std::endl;
}
