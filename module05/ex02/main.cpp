/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:28:40 by gbeauman          #+#    #+#             */
/*   Updated: 2023/04/25 17:09:57 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"AForm_class.hpp"
#include	"Bureaucrat_class.hpp"
#include	"ShrubberyCreationForm_class.hpp"
#include	"RobotomyRequestForm_class.hpp"
#include	"PresidentialPardonForm_class.hpp"

int	main(void)
{

			Bureaucrat	bob("Bob", 150);
			Bureaucrat	carl("Carl", 30);
			Bureaucrat	eude("Eude", 3);
			ShrubberyCreationForm	garden("Jardin");
			RobotomyRequestForm		robot("Android");
			PresidentialPardonForm	sorry("Paul");
			

			eude.setGrade("promotion");
			std::cout << "--- sign ---" << std::endl;
			bob.signForm(garden);
			eude.signForm(garden);
			bob.signForm(robot);
			carl.signForm(robot);
			bob.signForm(sorry);
		//	eude.signForm(sorry);
			std::cout << "--- execute ---" << std::endl;
			bob.executeForm(garden);
			eude.executeForm(garden);
			bob.executeForm(robot);
			eude.executeForm(robot);
			bob.executeForm(sorry);
			eude.executeForm(sorry);
	
	return (0);
}
