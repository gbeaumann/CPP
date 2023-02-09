/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:28:40 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/07 10:04:01 by gbeauman         ###   ########.fr       */
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
	try
		{
			Bureaucrat	bob("Bob", 140);
			//Bureaucrat	carl("Carl", 30);
			Bureaucrat	eude("Eude", 2);
			//ShrubberyCreationForm	test("Jardin");
			//RobotomyRequestForm		robot("Android");
			//PresidentialPardonForm	sorry("Paul");
			Intern someRandomIntern;
			AForm* rrf;
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		//	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		//	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");

			bob.signForm(*rrf);
			rrf->execute(bob);
			//eude.setGrade("promotion");
			//carl.signForm(robot);
			//eude.signForm(sorry);
			//robot.FormExec(carl);
			//sorry.FormExec(eude);
			delete	rrf;
		}
		

	catch	(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch	(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch	(AForm::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch	(AForm::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch	(AForm::FormNotSignedException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
