/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm_class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:45:28 by gbeauman          #+#    #+#             */
/*   Updated: 2023/04/25 15:35:44 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP

#include	"AForm_class.hpp"

class	ShrubberyCreationForm : public	AForm
{
		private:
			const std::string	_Target;
		public:
			ShrubberyCreationForm(void);
			ShrubberyCreationForm(const std::string target);
			ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
			ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rhs);
			~ShrubberyCreationForm(void);
			
			void	execute(const Bureaucrat &bureaucrat) const;
			std::string	getTarget(void) const;
};

#endif