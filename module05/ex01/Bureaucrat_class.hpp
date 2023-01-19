/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat_class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:42:58 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/19 17:57:23 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

#include	<iostream>
#include	<string>

class	Bureaucrat 
{
	private:
		const	std::string	_Name;
		unsigned int		_Grade;

	public:
		Bureaucrat(void);
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &rhs);
		Bureaucrat	&operator=(const Bureaucrat &rhs);
		~Bureaucrat(void);
		
		std::string		getName(void) const;
		unsigned int	getGrade(void) const;
		void			setGrade(std::string newGrade);
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &rhs);

#endif