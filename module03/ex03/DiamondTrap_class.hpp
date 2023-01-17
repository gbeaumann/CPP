/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap_class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:22:58 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/16 19:22:42 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_HPP
# define DIAMONDTRAP_CLASS_HPP

#include	"SkavTrap_class.hpp"
#include	"FragTrap_class.hpp"

class	DiamondTrap : public SkavTrap, public FragTrap
{
	private:
		std::string	_Name;
	
	public:
		DiamondTrap(void);
		//DiamondTrap(const DiamondTrap &copy);
		//DiamondTrap	&operator=(const DiamondTrap &copy);
		
		DiamondTrap(std::string name);
		~DiamondTrap(void);

		void	showInfo(void);
};

#endif