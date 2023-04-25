/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm_class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:17:13 by gbeauman          #+#    #+#             */
/*   Updated: 2023/04/25 17:06:48 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"RobotomyRequestForm_class.hpp"
#include	"Bureaucrat_class.hpp"


// coplien

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robotomy form", 45, 72), _Target("Default")
{
	//std::cout << this->getName() << "'s default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("Robotomy form", 45, 72), _Target(target)
{
	//std::cout << this->getName() << "'s constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs)
{
	*this = rhs;
	std::cout << "Robotomy copy constructor called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
		std::cout << "Overload operator called" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	//std::cout << this->getName() << "'s destructor called" << std::endl;	
}

// member fonctions

void	RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	if (!this->getIsSigned())
		throw AForm::FormNotSignedException();
	else if (!this->isExecutable(bureaucrat))
		throw AForm::GradeTooLowException();
	else
	{
		std::cout << "Bzzzz Viiii Criiiiiik" << std::endl;
		if (this->robotomySuccess())
			std::cout << this->getTarget() << " has been robotised with success!" << std::endl;
		else
			std::cout << this->getTarget() << " robotisation operation failed..." << std::endl;
	}
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_Target);
}

bool	RobotomyRequestForm::robotomySuccess(void) const
{
	srand(time(NULL));

	int random = rand() % 2;
	if (random == 0)
		return (false);
	else
		return (true);
}
