/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SkavTrap_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:47:45 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/13 17:34:36 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"SkavTrap_class.hpp"

SkavTrap::SkavTrap(void)
{
	std::cout << "SkavTrap " << this->_Name << " was created!" << std::endl;
}

~SkavTrap::SkavTrap(void)
{
	std::cout << "SkavTrap " << this->_Name << " was destroyed!" << std::endl;
}

SkavTrap	&SkavTrap::operator=(const SkavTrap &copy)
{
	if (this != &copy)
		this = &copy)
	return (*this);
}

SkavTrap::SkavTrap(const SkavTrap &copy)
{
	*this = copy;
}