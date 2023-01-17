/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:47:28 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/16 14:28:28 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ClapTrap_class.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_dmg = 20;
}

ClapTrap::ClapTrap(std::string name) : _Name(name)
{
	std::cout << "ClapTrap " << this->_Name << " was created!" << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_dmg = 20;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_Name << " was destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	if (this != &copy)
	{
		this->_Name = copy._Name;
		this->_Hit_points = copy._Hit_points;
		this->_Energy_points = copy._Energy_points;
		this->_Attack_dmg = copy._Attack_dmg;
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
		std::cout << this->_Name << " repares itself by " << amount << " points" << std::endl;
	}
	else if (this->_Energy_points == 0)
		std::cout << this->_Name << " has no more energy..." << std::endl;
	if (this->_Hit_points >= 100)
	{
		this->_Hit_points = 100;
		std::cout << this->_Name << " is fully repared!" << std::endl;
	}
}