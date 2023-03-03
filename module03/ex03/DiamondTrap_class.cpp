/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap_class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:31:43 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/23 15:32:11 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"DiamondTrap_class.hpp"

DiamondTrap::DiamondTrap(void) : SkavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->FragTrap::_Hit_points;
	this->SkavTrap::_Energy_points;
	this->FragTrap::_Attack_dmg;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), SkavTrap(), FragTrap(), _Name(name)
{
	std::cout << "DiamondTrap " << this->_Name << " was created!" << std::endl;
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points = SkavTrap::_Energy_points;
	this->_Attack_dmg = FragTrap::_Attack_dmg;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_Name << " was destroyed!" << std::endl;
}

void	DiamondTrap::showInfo(void)
{
	std::cout << "Hit points: " << this->_Hit_points << std::endl;
	std::cout << FragTrap::_Hit_points << std::endl;
	std::cout << "Energy points: " << this->_Energy_points << std::endl;
	std::cout << SkavTrap::_Energy_points << std::endl;
	std::cout << "Attack  dmg: " << this->_Attack_dmg << std::endl;
}
