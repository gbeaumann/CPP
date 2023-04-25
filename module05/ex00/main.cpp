/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:28:40 by gbeauman          #+#    #+#             */
/*   Updated: 2023/04/25 09:21:25 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat_class.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	bob("Bob", 1);
		Bureaucrat	carl("Carl", 150);
		//Bureaucrat	testHigh("Test", 151);
		//Bureaucrat	testLow("Test2", 0);
		const Bureaucrat	*test = new Bureaucrat();

		//bob = carl;
		
		std::cout << *test << std::endl;
		std::cout << bob << std::endl;
		//carl.setGrade("demotion");
		carl.setGrade("promotion");
		//bob.setGrade("promotion");
		bob.setGrade("demotion");

		delete test;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
