/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog_class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:10:19 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/17 17:37:18 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include	"Animal_class.hpp"
#include	"Brain_class.hpp"

class	Dog : public Animal
{
	private:
		Brain	*_Brain;
		
	public:
		Dog(void);
		Dog(const Dog &rhs);
		Dog	&operator=(const Dog &rhs);
		~Dog(void);

		void	makeSound(void) const;
};

#endif