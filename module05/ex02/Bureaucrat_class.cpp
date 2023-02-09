/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat_class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:52:55 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/07 09:31:58 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat_class.hpp"

// Coplien AForm

Bureaucrat::Bureaucrat(void) : _Name("New employee"), _Grade(150)
{
	if (this->_Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_Grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Default " << this->getName() << " constructor called with a grade of " << this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _Name(name), _Grade(grade)
{
	if (this->_Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_Grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	std::cout << this->getName() << " is a new employee with the grade " << this->getGrade() << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
	{
		this->_Grade = rhs._Grade;
	}
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) : _Name("Someone")
{
	*this = rhs;
	std::cout  << "Bureaucrat " << this->getName() << " copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << this->_Name << "'s destructor calld" << std::endl;
}

// Member fonctions

std::string	Bureaucrat::getName(void) const
{
	return (this->_Name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_Grade);
}

void	Bureaucrat::setGrade(std::string newGrade)
{
	if (this->_Grade - 1 <= 0 && newGrade == "promotion")
		throw Bureaucrat::GradeTooHighException();
	else if (this->_Grade + 1 > 150 && newGrade == "demotion")
		throw Bureaucrat::GradeTooLowException();
	if (newGrade == "promotion")
		--this->_Grade;
	else if (newGrade == "demotion")
		++this->_Grade;
	std::cout << this->getName() << " new grade is " << this->getGrade() << std::endl;
}

void	Bureaucrat::signForm(AForm &rhs) const
{
	try
	{
		rhs.beSigned(this->getGrade());
	}
	catch	(AForm::GradeTooHighException &e)
	{
		std::cout << this->getName()
		<< " couldn't sign form "
		<< "'"
		<< rhs.getName()
		<< "'" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	catch	(AForm::GradeTooLowException &e)
	{
		std::cout << this->getName()
		<< " couldn't sign form "
		<< "'"
		<< rhs.getName()
		<< "'" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	if (rhs.getIsSigned() == true)
		std::cout << this->getName()
		<< " has signed form "
		<< "'"
		<< rhs.getName()
		<< "'" << std::endl;
}

bool	Bureaucrat::executeForm(const AForm &form) const
{
	if (this->getGrade() <= form.getGradeToExec())
	{
		std::cout << this->getName() << " executed " << "'" << form.getName() << "'" << std::endl;
		return (true);
	}
	else
	{
		std::cout << this->getName() << "'s grade is too low to execut "
		<< "'" << form.getName() << "'" << std::endl;
		return (false);
	}
}

// Exception

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception, grade is too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception, grade is too low");
}

// Operator <<

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &rhs)
{
	os << rhs.getName() << " grade is " << rhs.getGrade();
	return (os);
}
