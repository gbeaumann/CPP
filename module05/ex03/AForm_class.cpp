/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm_class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:34:27 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/06 18:08:39 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"AForm_class.hpp"
#include	"Bureaucrat_class.hpp"

// Copilen AForm

AForm::AForm(void) : _Name("Default Form"), _Signed(false), _GradeToExec(150), _GradeToSign(150)
{
	std::cout << this->getName() << " constructor called" << std::endl;
}

AForm::AForm(const std::string name, unsigned int execGrade, unsigned int signGrade) : _Name(name), _Signed(false), _GradeToExec(execGrade), _GradeToSign(signGrade)
{
	if (execGrade < 1 || signGrade < 1)
		throw AForm::GradeTooHighException();
	else if (execGrade > 150 || signGrade > 150)
		throw AForm::GradeTooLowException();
	//std::cout << this->getName() << " constructor called" << std::endl;
}

AForm	&AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
	{
		this->_Signed = rhs.getIsSigned();
	}
	return (*this);
}

AForm::AForm(const AForm &rhs) : _Name("Copied Form"), _GradeToExec(100), _GradeToSign(100)
{
	std::cout << this->getName() << "'s constructor called" << std::endl;
	*this = rhs;
}

AForm::~AForm(void)
{
	//std::cout << this->getName() << "'s destructor called" << std::endl;
}

// Memebers fonctions

std::string	AForm::getName(void) const
{
	return(this->_Name);
}

std::string	AForm::isSigned(void) const
{
	if (_Signed == 0)
		return ("not signed");
	else
		return ("signed");
}

unsigned int	AForm::getGradeToSign(void) const
{
	return (this->_GradeToSign);
}

unsigned int	AForm::getGradeToExec(void) const
{
	return (this->_GradeToExec);
}

bool	AForm::getIsSigned(void) const
{
	if (this->_Signed == true)
		return	(true);
	else
		return (false);
}

void	AForm::beSigned(const Bureaucrat &rhs)
{
	if (this->getGradeToSign() >= rhs.getGrade())
		this->_Signed = true;
	else
		throw AForm::GradeTooLowException();
}

bool	AForm::isExecutable(const Bureaucrat &executor) const
{
	if (this->getGradeToExec() >= executor.getGrade())
		return (true);
	else
		return (false);
}

// operator <<

std::ostream	&operator<<(std::ostream &os, const AForm &rhs)
{
	os << rhs.getName() << "'s grade required to sign is " << rhs.getGradeToSign() << " and the grade required to execute is " << rhs.getGradeToExec();
	return (os); 
}

// Exception

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Exception: grade is too high");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Exception: grade is too low");
}

const char	*AForm::FormNotSignedException::what() const throw()
{
	return ("Exception: form not signed");
}
