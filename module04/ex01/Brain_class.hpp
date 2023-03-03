/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain_class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:56:23 by gbeauman          #+#    #+#             */
/*   Updated: 2023/03/03 10:06:38 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

#include	<iostream>
#include	<string>

class	Brain
{
	protected:
		std::string	_Idea[100];

	public:
		Brain(void);
		Brain(const Brain &rhs);
		Brain	&operator=(const Brain &rhs);
		~Brain(void);

		void		setIdea(unsigned int ideaNum, const std::string idea);
		std::string	getIdea(unsigned int ideaNum) const;
};

#endif
