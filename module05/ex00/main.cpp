/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:28:40 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/19 18:12:29 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat_class.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	bob("Bob", 50);
		Bureaucrat	carl("Carl", 150);
		const Bureaucrat	*test = new Bureaucrat();

		bob = carl;
		
		std::cout << *test << std::endl;
		std::cout << bob << std::endl;
		carl.setGrade("promotion");
		std::cout << bob << std::endl;
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
