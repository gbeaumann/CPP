/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:28:40 by gbeauman          #+#    #+#             */
/*   Updated: 2023/04/25 09:51:34 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Form_class.hpp"
#include	"Bureaucrat_class.hpp"

//  il faut faire par bloc try, quand exception fin du bloc try

int	main(void)
{
	try
	{
		Bureaucrat	bob("Bob", 50);
		Bureaucrat	carl("Carl", 30);
		Bureaucrat	fail("Fail", 150);
		const Bureaucrat	*test = new Bureaucrat();
		Form	form("A38", 60, 60);
		Form	paf("paf", 50, 70);
		const Form			*copForm = new Form();
		std::cout << *copForm << std::endl;
		std::cout << form << std::endl;
		std::cout << paf << std::endl;
		bob.signForm(form);
		std::cout << form.getName() << " is " << form.isSigned() << std::endl;
		std::cout << *test << std::endl;
		bob = carl;
		std::cout << bob << std::endl;
		carl.setGrade("promotion");
		std::cout << bob << std::endl;
		std::cout << paf.getName() << " is " <<  paf.isSigned() << std::endl;;
		fail.signForm(paf);
		bob.signForm(paf);

		delete test;
		delete copForm;
	}
		

	catch	(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch	(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
