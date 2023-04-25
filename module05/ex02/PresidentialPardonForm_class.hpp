/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm_class.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:27:41 by gbeauman          #+#    #+#             */
/*   Updated: 2023/04/25 15:36:09 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP

#include	"AForm_class.hpp"

class	PresidentialPardonForm	: public AForm
{
	private:
		const std::string	_Target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &rhs);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);
		~PresidentialPardonForm(void);
		
		std::string	getTarget(void) const;
		void		execute(const Bureaucrat &bureaucrat) const;
};

#endif