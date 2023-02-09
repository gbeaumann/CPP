/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat_class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:58:38 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/20 12:23:08 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Cat_class.hpp"

Cat::Cat(void)
{
	this->_type = "cat";
	std::cout << "A " << this->getType() << " approaches you." << std::endl;
	this->_Brain = new Brain();
}

Cat	&Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		*(this->_Brain) = *(rhs.getBrain());
	}
	return (*this);
}

Cat::Cat(const Cat &rhs)
{
	std::cout << "Cat copy called" << std::endl;
	this->_Brain = new Brain();
	*this = rhs;
}

Cat::~Cat(void)
{
	std::cout << this->getType() << std::endl;
	delete this->_Brain;
	std::cout << "The " << this->getType() << " falls asleep...night night" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "The kitty " << this->getType() << " purrs while thinking of killing you." << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return(this->_Brain);
}
