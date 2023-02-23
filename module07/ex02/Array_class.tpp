/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array_class.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:37:26 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/22 16:19:26 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Array_class.hpp"

//coplien

Array::Array(void) : _array(NULL), _size(0)
{}

Array::Array(unsigned int n) : _array(new T[n]), _size(n)
{}

Array::Array(const Array &rhs)
{
	*this = rhs;
}

Array	&Array::operator=(const Array &rhs)
{
	if (this != &rhs)
	{
		this->_array = rhs._array;
		this->_size = rhs._size;
	}
	return (*this);
}

Array::~Array(const Array &rhs)
{
	delete [] _array
}

// operateur
T	&Array::operator[](size_t index)
{
	if (index < this->size())
		return (this->_array[index])
	else
		throw Array::outOfBound();
}

// exception

const char	*Array::outOfBound::what() const throw()
{
	return ("Exception: index out of bounds");
}