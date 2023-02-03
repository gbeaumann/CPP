/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:30:21 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/03 09:33:35 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"HumanA_class.hpp"

HumanA::HumanA(std::string	name, Weapon &type) : _name(name), _weapon(type)
{
	std::cout << this->_name << " is arrived with " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << this->_name << " got shot" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks whith " << this->_weapon.getType() << std::endl;
}