/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form_class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:34:27 by gbeauman          #+#    #+#             */
/*   Updated: 2023/04/25 09:43:16 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Form_class.hpp"
#include	"Bureaucrat_class.hpp"

// Copilen form

Form::Form(void) : _Name("Default form"), _Signed(false), _GradeToExec(150), _GradeToSign(150)
{
	std::cout << this->getName() << " constructor called" << std::endl;
}

Form::Form(const std::string name, unsigned int execGrade, unsigned int signGrade) : _Name(name), _Signed(false), _GradeToExec(execGrade), _GradeToSign(signGrade)
{
	if (execGrade < 1 || signGrade < 1)
		throw Form::GradeTooHighException();
	else if (execGrade > 150 || signGrade > 150)
		throw Form::GradeTooLowException();
	std::cout << this->getName() << " constructor called" << std::endl;
}

Form	&Form::operator=(const Form &rhs)
{
	if (this != &rhs)
	{
		this->_Signed = rhs.getIsSigned();
	}
	return (*this);
}

Form::Form(const Form &rhs) : _Name("Copied form"), _GradeToExec(100), _GradeToSign(100)
{
	std::cout << this->getName() << "'s constructor called" << std::endl;
	*this = rhs;
}

Form::~Form(void)
{
	std::cout << this->getName() << "'s destructor called" << std::endl;
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

bool	Form::getIsSigned(void) const
{
	return (this->_Signed);
}

void	Form::beSigned(Bureaucrat const &rhs)
{
	if (this->getGradeToSign() >= rhs.getGrade())
		this->_Signed = true;
	else
		throw Form::GradeTooLowException();
}

// operator <<

std::ostream	&operator<<(std::ostream &os, const Form &rhs)
{
	os << rhs.getName() << "'s grade required to sign is " << rhs.getGradeToSign() << " and the grade required to execute is " << rhs.getGradeToExec();
	return (os); 
}

// Exception

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Exception: grade is too high");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Exception: grade is too low");
}
