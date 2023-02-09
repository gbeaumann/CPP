/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm_class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:51:41 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/07 09:36:02 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ShrubberyCreationForm_class.hpp"

// coplien

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery form", 137, 145), _Target("default")
{
	//std::cout << this->getName() << "'s default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("Shrubbery form", 137, 145), _Target(target)
{
	//std::cout << this->getName() << "'s constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
{
	*this = rhs;
	std::cout << "Shrubbery copy constructor called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
		std::cout << "Overload operator called" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	//std::cout << this->getName() << "'s destructor called" << std::endl;
}

// member fonctions

std::string	ShrubberyCreationForm::getTarget(void)
{
	return (this->_Target);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat)
{
	if (this->isExecutable(bureaucrat))
	{
		std::ofstream	shrubbery;
		shrubbery.open(this->getTarget() + "_shrubbery");
		shrubbery << "        ###" << std::endl;
		shrubbery << "       #o###" << std::endl;
		shrubbery << "     #####o###" << std::endl;
		shrubbery << "   #o#'\'#|#/###" << std::endl;
		shrubbery << "    ###'\'|/#o#" << std::endl;
		shrubbery << "      # }|{  #" << std::endl;
		shrubbery << "        }|{   " << std::endl;
		shrubbery << "/////////////////" << std::endl;
		shrubbery << "        ###" << std::endl;
		shrubbery << "       #o###" << std::endl;
		shrubbery << "     #####o###" << std::endl;
		shrubbery << "   #o#'\'#|#/###" << std::endl;
		shrubbery << "    ###'\'|/#o#" << std::endl;
		shrubbery << "      # }|{  #" << std::endl;
		shrubbery << "        }|{   " << std::endl;
	
	  shrubbery.close();
	}
}