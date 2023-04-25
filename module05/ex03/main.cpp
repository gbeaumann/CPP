/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:28:40 by gbeauman          #+#    #+#             */
/*   Updated: 2023/04/25 18:16:37 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"AForm_class.hpp"
#include	"Bureaucrat_class.hpp"
#include	"ShrubberyCreationForm_class.hpp"
#include	"RobotomyRequestForm_class.hpp"
#include	"PresidentialPardonForm_class.hpp"
#include	"Intern_class.hpp"

int	main(void)
{

	Bureaucrat	bob("Bob", 150);
	Bureaucrat	eude("Eude", 2);
	Intern someRandomIntern;
	AForm	*rrf;
	AForm	*scf;
	AForm	*ppf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	//rrf = someRandomIntern.makeForm("robot", "Bender");
	scf = someRandomIntern.makeForm("shrubbery creation", "Eden");
	ppf = someRandomIntern.makeForm("presidential pardon", "Bill");

	if (rrf)
	{
		std::cout << "--- rrf exception ---" << std::endl;
		bob.signForm(*rrf);
		bob.executeForm(*rrf);
		std::cout << "--- rrf correct ---" << std::endl;
		eude.signForm(*rrf);
		eude.executeForm(*rrf);
		delete rrf;
	}
	if (scf)
	{
		std::cout << "--- scf exception ---" << std::endl;
		bob.signForm(*scf);
		bob.executeForm(*scf);
		std::cout << "--- scf correct ---" << std::endl;
		eude.signForm(*scf);
		eude.executeForm(*scf);
		delete scf;
	}
	if (ppf)
	{
		std::cout << "--- ppf exception ---" << std::endl;
		bob.signForm(*ppf);
		bob.executeForm(*ppf);
		std::cout << "--- ppf correct ---" << std::endl;
		eude.signForm(*ppf);
		eude.executeForm(*ppf);
		delete ppf;
	}
	std::cout << "------------" << std::endl;
	
	/*if (rrf)
		delete rrf;
	if (scf)
		delete scf;
	if (ppf)
		delete ppf;*/
	
	return (0);
}
