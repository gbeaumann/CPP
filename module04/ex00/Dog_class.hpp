/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog_class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:10:19 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/17 11:43:10 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include	"Animal_class.hpp"

class	Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog &rhs);
		Dog	&operator=(const Dog &rhs);
		~Dog(void);

		void	makeSound(void) const;
};

#endif