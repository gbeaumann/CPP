/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SkavTrap_class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:15:05 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/13 16:51:13 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKAVTRAP_CLASS_HPP
# define SKAVTRAP_CLASS_HPP

#include	"ClapTrap_class.hpp"

class	SkavTrap : public ClapTrap
{
	private:
		SkavTrap(const SkavTrap &copy);
		SkavTrap	&operator=(const SkavTrap &copy);
	public:
		SkavTrap(void);
		~SkavTrap(void);
		void	attack(void);
};

#endif
