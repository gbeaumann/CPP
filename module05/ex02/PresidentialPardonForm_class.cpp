/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm_class.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:34:19 by gbeauman          #+#    #+#             */
/*   Updated: 2023/04/25 18:12:04 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"PresidentialPardonForm_class.hpp"
#include	"Bureaucrat_class.hpp"


// coplien

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Presidential form", 5, 25), _Target("Default")
{
	//std::cout << this->getTarget() << "'s default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("Presidential form", 5, 25), _Target(target)
{
	//std::cout << this->getTarget() << "'s constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs)
{
	*this = rhs;
	std::cout << "Presidential copy constructor called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
		std::cout << "Overload operator called" << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	//std::cout << this->getName() << "'s destructor called" << std::endl;
}

// member fonctions

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_Target);
}

void	PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
	if (!this->getIsSigned())
		throw AForm::FormNotSignedException();
	else if (!this->isExecutable(bureaucrat))
		throw AForm::GradeTooLowException();
	else
		std::cout << this->getTarget() << " was excused by Zaphod Beeblebrox" << std::endl;
}