/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:09:15 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/13 16:43:30 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ClapTrap_class.hpp"

int	main(void)
{
	ClapTrap	charle("Charle");

	charle.takeDamage(5);
	charle.takeDamage(5);
	charle.attack("Philou");
	charle.beRepaired(7);
	charle.beRepaired(7);
	charle.beRepaired(7);
	charle.beRepaired(7);
	charle.beRepaired(7);
	charle.beRepaired(7);
	charle.beRepaired(7);
	charle.beRepaired(7);
	charle.beRepaired(7);
	charle.beRepaired(7);
	charle.beRepaired(7);
	charle.attack("Philou");
	charle.attack("Philou");
	charle.attack("Philou");
	charle.attack("Philou");
	charle.attack("Philou");
	charle.attack("Philou");
	charle.attack("Philou");
	charle.attack("Philou");
	charle.attack("Philou");
	charle.attack("Philou");
	charle.attack("Philou");
	charle.attack("Philou");
	
	return (0);
}
