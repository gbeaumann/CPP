/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:47:31 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/07 09:37:57 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Intern_class.hpp"

// coplien

Intern::Intern(void)
{
	std::cout << "Intern's default operator called" << std::endl;
}

Intern::Intern(const Intern &rhs)
{
	*this = rhs;
	std::cout << "Intern's copy constructor called" << std::endl;
}

Intern	&Intern::operator=(const Intern &rhs)
{
	if (this != &rhs)
		std::cout << "Overload operator called" << std::endl;
	return (*this);
}

Intern::~Intern(void)
{
	std::cout << "Intern's destructor called" << std::endl;
}

// member fonctions

AForm	*Intern::makeForm(const std::string form, const std::string target)
{
	if (form.compare("shrubbery creation") == 0 || form.compare("robotomy request") == 0 || form.compare("presidential pardon") == 0)
	{
		std::string	tab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
		AForm	*tab_ft[] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
		for (size_t i = 0; i < 3; i++)
		{
			if (tab[i] == form)
			{
				for (size_t i2 = i + 1; i2 < 3; i2++)
					delete (tab_ft[i2]);
				return (tab_ft[i]);
			}
			else
				delete (tab_ft[i]);
		}
	}
	else
		std::cout << "The intern did not find the form: " << form << std::endl;
	return (NULL);
}