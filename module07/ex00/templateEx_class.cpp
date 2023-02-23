/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templateEx_class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:41:00 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/16 11:48:47 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"templateEx_class.hpp"

// coplien

ExTemp::ExTemp(void)
{}

ExTemp::ExTemp(const ExTemp &rhs)
{
	*this = rhs;
}

ExTemp	&ExTemp::operator=(const ExTemp &rhs)
{
	if (this != &rhs)
		std::cout << "Overload operator called" << std::endl;
	return (*this);
}

ExTemp::~ExTemp(void)
{}
