/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog_class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:58:38 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/20 12:30:45 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Dog_class.hpp"

Dog::Dog(void)
{
	this->_type = "dog";
	std::cout << "A " << this->getType() << " approaches you with is tongue out." << std::endl;
	this->_Brain = new Brain();
}

Dog	&Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		*(this->_Brain) = *(rhs.getBrain());
	}
	return (*this);
}

Dog::Dog(const Dog &rhs)
{
	std::cout << "Dog copy called" << std::endl;
	this->_Brain = new Brain();
	*this = rhs;
}

Dog::~Dog(void)
{
	delete	this->_Brain;
	std::cout << "The " << this->getType() << " goes chasing a squirrel!" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "The " << this->getType() << " barks at a tree trunk!?" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return(this->_Brain);
}