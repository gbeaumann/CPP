/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:16:43 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/14 10:38:49 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Serialize_class.hpp"

// Coplien

Serialize::Serialize(void)
{
}

Serialize::Serialize(const Serialize &rhs)
{
	*this  = rhs;
}

Serialize	&Serialize::operator=(const Serialize &rhs)
{
	if (this != &rhs)
		std::cout << "Operator = called" << std::endl;
	return (*this);
}

Serialize::~Serialize(void)
{
}

// Member fonctions

uintptr_t	Serialize::serialize(Data *ptr)
{
	uintptr_t	result = reinterpret_cast<uintptr_t>(ptr);
	return (result);
}

Data	*Serialize::deserialize(uintptr_t raw)
{
	Data	*result = reinterpret_cast<Data *>(raw);
	return (result);
}
