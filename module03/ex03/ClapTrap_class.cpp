/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:47:28 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/23 15:32:07 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ClapTrap_class.hpp"

ClapTrap::ClapTrap(void) : _Name("Default"), _Hit_points(90), _Energy_points(40), _Attack_dmg(10)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hit_points(90), _Energy_points(40), _Attack_dmg(10)
{
	std::cout << "ClapTrap " << this->_Name << " was created!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_Name << " was destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	*this = rhs;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		this->_Name = rhs._Name;
		this->_Hit_points = rhs._Hit_points;
		this->_Energy_points = rhs._Energy_points;
		this->_Attack_dmg = rhs._Attack_dmg;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_Hit_points <=0)
		std::cout << this->_Name << " is down, it can't attack..." << std::endl;
	if (this->_Energy_points > 0 && this->_Hit_points > 0)
	{
		this->_Energy_points--;
		std::cout << this->_Name << " attacks " << target << ", causing " << this->_Attack_dmg << " points of damage!" << std::endl;
	}
	else if (this->_Energy_points <= 0)
		std::cout << this->_Name << " has no more energy..." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hit_points > 0)
	{
		this->_Hit_points -= amount;
		std::cout << this->_Name << " takes " << amount << " of damage!" << std::endl;
	}
	if (this->_Hit_points <= 0)
		std::cout << this->_Name << " is down..." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Energy_points > 0 && this->_Hit_points < 100)
	{
		this->_Energy_points--;
		this->_Hit_points += amount;
		std::cout << this->_Name << " repares himself by " << amount << " points" << std::endl;
	}
	else if (this->_Energy_points == 0)
		std::cout << this->_Name << " has no more energy..." << std::endl;
	if (this->_Hit_points >= 100)
	{
		this->_Hit_points = 100;
		std::cout << this->_Name << " is fully repared!" << std::endl;
	}
}
