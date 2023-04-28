/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array_class.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:37:26 by gbeauman          #+#    #+#             */
/*   Updated: 2023/04/27 09:23:16 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Array_class.hpp"

//coplien
template	<typename	T>
Array<T>::Array(void) : _array(new T[0]), _size(0)
{}

template	<typename	T>
Array<T>::Array(unsigned int n) : _size(n)
{
	if (this->_size)
		this->_array = new T[n];
}

template	<typename	T>
Array<T>::Array(const Array &rhs)
{
	*this = rhs;
}

template	<typename	T>
Array<T>	&Array<T>::operator=(const Array &rhs)
{
	if (this != &rhs)
	{
		if (this->_array)
			delete [] this->_array;
		this->_size = rhs._size;
		this->_array = new T[rhs._size];
		for (size_t i = 0; i < size(); i++)
			this->_array[i] = rhs._array[i];
	}
	return (*this);
}

template	<typename	T>
Array<T>::~Array(void)
{
	if (this->_array)
		delete [] this->_array;
}

// member fonctions
template	<typename	T>
size_t	Array<T>::size(void)
{
	return (this->_size);
}

template	<typename	T>
T	*Array<T>::_getArray(void)
{
	return (this->_array);
}

template	<typename	T>
void	Array<T>::setArray(size_t index, const T param)
{
	this->_array[index] = param;
	std::cout << "index: " << index << " = " << this->_array[index] << std::endl;
}

// operateur
template	<typename	T>
T	&Array<T>::operator[](size_t index)
{
	if (index < this->size())
		return (this->_array[index]);
	else
		throw Array::outOfBound();
}

// exception
template	<typename	T>
const char	*Array<T>::outOfBound::what() const throw()
{
	return ("Exception: index out of bounds");
}
