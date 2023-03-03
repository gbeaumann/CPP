/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:30:29 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/23 15:31:33 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"FragTrap_class.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_dmg = 20;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << this->_Name << " is created!" << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_dmg = 20;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

FragTrap::FragTrap(const FragTrap &rhs)
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
