/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:10:56 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/03 09:16:13 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie_class.hpp"
#include	<iostream>
#include	<string>

Zombie::Zombie(void)
{
	std::cout << "Zombie is created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " is dead... funny for a zombie" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " dance like MJ" << std::endl;
}