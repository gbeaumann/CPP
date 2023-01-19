/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form_class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:25:23 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/19 18:43:05 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_CLASS_HPP
# define FORM_CLASS_HPP

#include	"Bureaucrat_class.hpp"

class	Form
{
	private:
		const std::string	_Name;
		bool				_Signed;
		const unsigned int	_GradeToSign;
		const unsigned int	_GradeToExec;

	public:
		From(void);
		Form(const Form &rhs);
		Form	&operator(const Form &rhs);
		~Form(void);
		
		std::string		getName(void) const;
		std::string		isSigned(void) const;
		unsigned int	getGradeToSign(void) const;
		unsigned int	getGradeToExec(void) const;
		
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
