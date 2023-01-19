/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form_class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:34:27 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/19 18:50:01 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Form_class.hpp"

// Copilen form

Form::Form(void) : _Name("Default form"), _Signed(0), _GradeToExec(1), _GradeToExec(150)
{
	std::cout << this->getName() << " constructor called" << std::endl;
}

// Memebers fonctions

std::string	Form::getName(void) const
{
	return(this->_Name);
}

std::string	Form::isSigned(void) const
{
	if (_Signed == 0)
		return ("not signed");
	else
		return ("signed");
}

unsigned int	Form::getGradeToSign(void) const
{
	return (this->_GradeToSign);
}

unsigned int	Form::getGradeToExec(void) const
{
	return (this->_GradeToExec);
}
