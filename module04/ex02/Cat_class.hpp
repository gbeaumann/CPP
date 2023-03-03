/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat_class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:52:22 by gbeauman          #+#    #+#             */
/*   Updated: 2023/03/03 11:13:53 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

#include	"Animal_class.hpp"
#include	"Brain_class.hpp"

class	Cat : public Animal
{
	private:
		Brain	*_Brain;
	public:
		Cat(void);
		Cat(const Cat &rhs);
		Cat	&operator=(const Cat &rhs);
		~Cat(void);

		void	makeSound(void) const;
		Brain	*getBrain(void) const;
};

#endif
