/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:02:58 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/13 10:13:09 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Fixed_class.hpp"

Fixed::Fixed()
{
	this->_nbr = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const int nbr1)
{
	this->_nbr = nbr1 << this->_nbr_bit;
}

Fixed::Fixed(const float nbr2)
{
	this->setRawBits(std::roundf(nbr2 * pow(2, this->_nbr_bit)));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

std::ostream &operator<<(std::ostream &os, const Fixed &copy)
{
		os << copy.toFloat();
		return (os);
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	if (this  != &copy)
		this->_nbr = copy.getRawBits();
	return (*this);
}

// operateur d'arithmétiques
Fixed	Fixed::operator+(const Fixed &copy) const
{
	float	result;
	
	result = this->toFloat() + copy.toFloat();
	return (result);
}

Fixed	Fixed::operator-(const Fixed &copy) const
{
	float	result;

	result = this->toFloat() - copy.toFloat();
	return (result);
}

Fixed	Fixed::operator*(const Fixed &copy) const
{
	float	result;

	result = this->toFloat() * copy.toFloat();
	return (result);
}

Fixed	Fixed::operator/(const Fixed &copy) const
{
	float	result;

	result = this->toFloat() / copy.toFloat();
	return (result);
}

// operateur de comparaison

bool	Fixed::operator<(const Fixed &copy) const
{
	bool	result;
	
	result = this->toFloat() < copy.toFloat();
	return (result);
}

bool	Fixed::operator>(const Fixed &copy) const
{
	bool	result;

	result = this->toFloat() > copy.toFloat();
	return (result);	
}

bool	Fixed::operator==(const Fixed &copy) const
{
	bool	result;
	
	result = this->toFloat() == copy.toFloat();
	return (result);
}

bool	Fixed::operator!=(const Fixed &copy) const
{
	bool	result;

	result = this->toFloat() != copy.toFloat();
	return (result);
}

bool	Fixed::operator<=(const Fixed &copy) const
{
	bool	result;

	result = this->toFloat() <= copy.toFloat();
	return (result);
}

bool	Fixed::operator>=(const Fixed &copy) const
{
	bool	result;

	result = this->toFloat() >= copy.toFloat();
	return (result);
}

// operateur d'incrementation/d'ecrementation
Fixed	Fixed::operator++()
{
	++this->_nbr;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	++this->_nbr;
	return (temp);
}

Fixed	Fixed::operator--()
{
	--this->_nbr;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp;
	
	temp = *this;
	--this->_nbr;
	return (temp);
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
	
	result = this->_nbr / pow(2, this->_nbr_bit);
	return (result);
}

int	Fixed::toInt() const
{
	return (this->_nbr >> this->_nbr_bit);
}

Fixed	Fixed::min(Fixed &nbr1, Fixed &nbr2)
{
	if (nbr1 < nbr2)
		return (nbr1);
	else if (nbr2 < nbr1)
		return (nbr2);
	return (nbr1);
}

Fixed	Fixed::min(const Fixed &nbr1, const Fixed &nbr2)
{
	if (nbr1 < nbr2)
		return (nbr1);
	else if (nbr2 < nbr1)
		return (nbr2);
	return (nbr1);
}

Fixed	Fixed::max(Fixed &nbr1, Fixed &nbr2)
{
	if (nbr1 > nbr2)
		return (nbr1);
	else if (nbr2 > nbr1)
		return (nbr2);
	else
		return (nbr1);
}

Fixed	Fixed::max(const Fixed &nbr1, const Fixed &nbr2)
{
	if (nbr1 > nbr2)
		return (nbr1);
	else if (nbr2 > nbr1)
		return (nbr2);
	else
		return (nbr1);
}
