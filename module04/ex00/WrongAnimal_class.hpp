/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal_class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:38:05 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/27 10:56:59 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

#include	<iostream>
#include	<string>

class	WrongAnimal
{
	protected:
		std::string	_type;
	
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &rhs);
		WrongAnimal	&operator=(const WrongAnimal &rhs);
		~WrongAnimal(void);

		void	makeSound(void) const;
		std::string	getType(void) const;
		
};

#endif
