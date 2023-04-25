/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm_class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:25:23 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/06 18:00:52 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AForm_CLASS_HPP
# define AForm_CLASS_HPP

class	Bureaucrat;
#include	<iostream>
#include	<string>
#include	<fstream>

class	AForm
{
	private:
		const std::string	_Name;
		bool				_Signed;
		const unsigned int	_GradeToExec;
		const unsigned int	_GradeToSign;

	public:
		AForm(void);
		AForm(const std::string name, unsigned int execGrade, unsigned int signGrade);
		AForm(const AForm &rhs);
		AForm	&operator=(const AForm &rhs);
		virtual	~AForm(void) = 0;
		
		std::string		getName(void) const;
		std::string		isSigned(void) const;
		unsigned int	getGradeToSign(void) const;
		unsigned int	getGradeToExec(void) const;
		bool			getIsSigned(void) const;
		void			beSigned(const Bureaucrat &rhs);
		virtual void	execute(const Bureaucrat &executor) const = 0;
		bool			isExecutable(const Bureaucrat &executor) const;
		
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
		class	FormNotSignedException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};
std::ostream	&operator<<(std::ostream &os, const AForm &rhs);

#endif
