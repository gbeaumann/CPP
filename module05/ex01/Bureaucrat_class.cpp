/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat_class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:52:55 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/19 18:02:51 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat_class.hpp"

Bureaucrat::Bureaucrat(void) : _Name("New employee"), _Grade(150)
{
	if (this->_Grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_Grade <= 0)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Default " << this->getName() << " constructor called with a grade of " << this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _Name(name), _Grade(grade)
{
	if (this->_Grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_Grade <= 0)
		throw Bureaucrat::GradeTooLowException();
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
		throw Bureaucrat::GradeTooLowException();
	else if (this->_Grade + 1 > 150 && newGrade == "demotion")
		throw Bureaucrat::GradeTooHighException();
	if (newGrade == "promotion")
		--this->_Grade;
	else if (newGrade == "demotion")
		++this->_Grade;
	std::cout << this->getName() << " new grade is " << this->getGrade() << std::endl;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception, grade is too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception, grade too low");
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &rhs)
{
	os << rhs.getName() << " grade is " << rhs.getGrade();
	return (os);
}
