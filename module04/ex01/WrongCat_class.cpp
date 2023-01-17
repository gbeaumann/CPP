/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:55:52 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/17 14:40:53 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"WrongCat_class.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "A funky looking cat";
	std::cout << this->getType() << " sit in front of you..." << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return(*this);
}

WrongCat::WrongCat(const WrongCat &rhs)
{
	*this = rhs;
}

WrongCat::~WrongCat(void)
{
	std::cout << this->getType() << " fly off" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "AAAAAAAAAAAAAAAAAAAAAAAHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH" << std::endl;
}