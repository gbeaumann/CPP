/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:02:58 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/11 18:54:01 by gbeauman         ###   ########.fr       */
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

Fixed::Fixed(const int nbr1)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nbr = nbr1 << this->_nbr_bit;
}

Fixed::Fixed(const float nbr2)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(std::roundf(nbr2 * pow(2, this->_nbr_bit)));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy operator called" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this  != &copy)
	{
		_nbr = copy.getRawBits();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &copy)
{
		os << copy.toFloat();
		return (os);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nbr = raw;
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_nbr);
}

float	Fixed::toFloat(void) const
{
	float	result;
	
	result = this->_nbr / pow(2, this->_nbr_bit);
	return (result);
	//return ((float)(this->_nbr) / (pow(2, this->_nbr_bit)));
}

int	Fixed::toInt() const
{
	return (this->_nbr >> this->_nbr_bit);
}
