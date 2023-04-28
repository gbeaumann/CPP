/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array_class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:42:55 by gbeauman          #+#    #+#             */
/*   Updated: 2023/04/27 09:23:20 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
# define ARRAY_CLASS_HPP

#include	<iostream>
#include	<string>

template	<typename	T>

class	Array
{
	private:
		T		*_array;
		size_t	_size;
		T		*_getArray(void);
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array &rhs);
		Array	&operator=(const Array &rhs);
		T		&operator[](size_t index);
		~Array(void);
		
		size_t	size(void);
		void	setArray(size_t index, const T param);

		class	outOfBound	: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif
