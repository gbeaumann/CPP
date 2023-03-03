/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SkavTrap_class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:15:05 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/23 13:55:55 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKAVTRAP_CLASS_HPP
# define SKAVTRAP_CLASS_HPP

#include	"ClapTrap_class.hpp"

class	SkavTrap : public ClapTrap
{
	public:
		SkavTrap(void);
		SkavTrap(std::string name);
		SkavTrap(const SkavTrap &rhs);
		SkavTrap	&operator=(const SkavTrap &rhs);
		~SkavTrap(void);
		void	attack(const std::string	&target);
		void	guardGate(void);
};

#endif
