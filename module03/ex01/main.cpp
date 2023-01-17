/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:09:15 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/16 11:17:18 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"SkavTrap_class.hpp"

int	main(void)
{
	SkavTrap eudes("Eudes");

	eudes.takeDamage(20);
	eudes.takeDamage(60);
	eudes.beRepaired(30);
	eudes.beRepaired(60);
	eudes.attack("Bob");
	eudes.attack("Bob");
	eudes.attack("Bob");
	eudes.attack("Bob");
	eudes.attack("Bob");
	eudes.attack("Bob");
	eudes.attack("Bob");
	eudes.attack("Bob");
	eudes.attack("Bob");
	eudes.attack("Bob");
	eudes.guardGate();
	//charle.guardGate();
	
	return (0);
}
