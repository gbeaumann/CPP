/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:09:15 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/17 10:03:10 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	"SkavTrap_class.hpp"
//#include	"FragTrap_class.hpp"
#include	"DiamondTrap_class.hpp"

int	main(void)
{
	//ClapTrap	charles("Charles");
	//SkavTrap	eudes("Eudes");
	DiamondTrap	moon("Moon");

	moon.guardGate();
	moon.highFivesGuys();
	moon.showInfo();
	//bichette.guardGate();
	//eudes.highFivesGuys();
	//charles.guardGate();
	//charles.highFivesGuys();
	
	return (0);
}
