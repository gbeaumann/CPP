/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:37:03 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/27 11:09:52 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Animal_class.hpp"

Animal::Animal(void)
{
	this->_type = "animal";
	std::cout << "an " << this->getType() << " has appeared int the distance." << std::endl;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	if (this->_type != rhs._type)
		this->_type = rhs._type;
	return (*this);
}

Animal::Animal(const Animal &rhs)
{
	*this = rhs;
}

Animal::~Animal(void)
{
	std::cout << "the " << this->getType() << " runs away..." << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << this->getType() << " farts" << std::endl;
}
