/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal_class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:30:11 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/23 15:46:44 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"WrongAnimal_class.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->_type = "monstrosity";
	std::cout << "A " << this->getType() << " approaches..." << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return(*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	*this = rhs;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "The monstrosity left" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << this->getType() << " makes clicking noises... fly you fool!" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
