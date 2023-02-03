/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:37:33 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/01/05 14:57:01 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie_class.hpp"
#include	<iostream>

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << this->_name << " is created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " is dead... again" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
