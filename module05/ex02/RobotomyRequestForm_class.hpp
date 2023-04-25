/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm_class.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:08:37 by gbeauman          #+#    #+#             */
/*   Updated: 2023/04/25 15:34:15 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

#include	"AForm_class.hpp"
#include	<stdlib.h>
#include	<time.h>

class	RobotomyRequestForm : public AForm
{
	private:
		const std::string	_Target;
		
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &rhs);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);
		~RobotomyRequestForm(void);

		void				execute(const Bureaucrat &bureaucrat) const;
		bool				robotomySuccess(void) const;
		std::string			getTarget(void) const;
};

#endif