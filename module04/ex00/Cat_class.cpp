/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat_class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:58:38 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/17 11:47:59 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Cat_class.hpp"

Cat::Cat(void)
{
	this->_type = "cat";
	std::cout << "A " << this->getType() << " approaches you." << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	if (this->_type != rhs._type)
		this->_type = rhs._type;
	return (*this);
}

Cat::Cat(const Cat &rhs)
{
	*this = rhs;
}

Cat::~Cat(void)
{
	std::cout << "The " << this->getType() << " falls asleep...night night" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "The kitty " << this->getType() << " purrs while thinking of killing you." << std::endl;
}