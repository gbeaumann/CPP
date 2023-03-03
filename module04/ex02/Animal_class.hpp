/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal_class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:28:43 by gbeauman          #+#    #+#             */
/*   Updated: 2023/03/03 11:14:02 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

#include	<iostream>
#include	<string>
#include	"Brain_class.hpp"

class	Animal
{
	protected:
		std::string	_type;
	
	public:
		Animal(void);
		Animal(const Animal &rhs);
		Animal	&operator=(const Animal &rhs);
		virtual ~Animal(void);

		std::string	getType(void) const;
		virtual void	makeSound(void) const = 0;
};

#endif
