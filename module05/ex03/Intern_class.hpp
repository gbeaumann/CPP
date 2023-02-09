/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern_class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:44:45 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/07 09:32:45 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

#include	"AForm_class.hpp"
#include	"ShrubberyCreationForm_class.hpp"
#include	"RobotomyRequestForm_class.hpp"
#include	"PresidentialPardonForm_class.hpp"

class	Intern
{
	public:
		Intern(void);
		Intern(const Intern &rhs);
		Intern	&operator=(const Intern &rhs);
		~Intern(void);

		AForm	*makeForm(const std::string form, const std::string target);
};

#endif