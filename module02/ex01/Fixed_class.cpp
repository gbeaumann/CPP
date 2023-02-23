/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:02:58 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/23 10:59:02 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Fixed_class.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_nbr = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int nbr1)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(nbr1 << this->_nbr_bit);
}

Fixed::Fixed(const float nbr2)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(nbr2 * this->_ft_pow(2, this->_nbr_bit)));
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy operator called" << std::endl;
	*this = rhs;
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this  != &rhs)
	{
		_nbr = rhs.getRawBits();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &rhs)
{
		os << rhs.toFloat();
		return (os);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nbr = raw;
}

int	Fixed::getRawBits(void) const
{
	return (this->_nbr);
}

float	Fixed::toFloat(void) const
{
	float	result;
	
	result = this->_nbr / (this->_ft_pow(2, this->_nbr_bit));
	return (result);
}

int	Fixed::toInt(void) const
{
	return (this->_nbr >> this->_nbr_bit);
}

float	Fixed::_ft_pow(int base, int value) const
{
	float	result = base;

	for(int i = 0; i < (value - 1); i++)
		result *= base;
	return (result);
}