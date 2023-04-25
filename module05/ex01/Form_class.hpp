/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form_class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:25:23 by gbeauman          #+#    #+#             */
/*   Updated: 2023/04/25 09:43:21 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_CLASS_HPP
# define FORM_CLASS_HPP

class	Bureaucrat;
#include	<iostream>
#include	<string>

class	Form
{
	private:
		const std::string	_Name;
		bool				_Signed;
		const unsigned int	_GradeToExec;
		const unsigned int	_GradeToSign;

	public:
		Form(void);
		Form(const std::string name, unsigned int execGrade, unsigned int signGrade);
		Form(const Form &rhs);
		Form	&operator=(const Form &rhs);
		~Form(void);
		
		std::string		getName(void) const;
		std::string		isSigned(void) const;
		unsigned int	getGradeToSign(void) const;
		unsigned int	getGradeToExec(void) const;
		bool			getIsSigned(void) const;
		void			beSigned(Bureaucrat const &rhs);
		
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual	const char	*what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};
std::ostream	&operator<<(std::ostream &os, const Form &rhs);

#endif
