/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog_class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:58:38 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/17 11:48:05 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Dog_class.hpp"

Dog::Dog(void)
{
	this->_type = "dog";
	std::cout << "A " << this->getType() << " approaches you with is tongue out." << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	if (this->_type != rhs._type)
		this->_type = rhs._type;
	return (*this);
}

Dog::Dog(const Dog &rhs)
{
	*this = rhs;
}

Dog::~Dog(void)
{
	std::cout << "The " << this->getType() << " goes chasing a squirrel!" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "The " << this->getType() << " barks at a tree trunk!?" << std::endl;
}