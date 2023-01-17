/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap_class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:23:33 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/16 11:30:14 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

#include	"ClapTrap_class.hpp"

class	FragTrap : public ClapTrap
{
	private:
		FragTrap(void);
		FragTrap(const FragTrap &copy);
		FragTrap	&operator=(const FragTrap &copy);
	
	public:
		FragTrap(std::string name);
		~FragTrap(void);
		void	highFivesGuys(void);
	
};

#endif
