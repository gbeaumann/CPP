/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:02:58 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/13 10:02:29 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Fixed_class.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_nbr = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	if (this  != &copy)
	{
		this->_nbr = copy.getRawBits();
	}
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nbr = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nbr);
}
