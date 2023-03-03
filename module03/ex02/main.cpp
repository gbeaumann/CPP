/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:09:15 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/23 13:51:03 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"SkavTrap_class.hpp"
#include	"FragTrap_class.hpp"

int	main(void)
{
	ClapTrap	charles("Charles");
	SkavTrap	eudes("Eudes");
	FragTrap	bichette("Bichette");

	bichette.takeDamage(20);
	bichette.takeDamage(60);
	bichette.beRepaired(30);
	bichette.beRepaired(60);
	bichette.attack("Bob");
	bichette.attack("Bob");
	bichette.attack("Bob");
	bichette.attack("Bob");
	bichette.attack("Bob");
	bichette.attack("Bob");
	bichette.attack("Bob");
	bichette.attack("Bob");
	bichette.attack("Bob");
	bichette.attack("Bob");
	charles.attack("someone");
	eudes.attack("Paul");
	bichette.highFivesGuys();
	//bichette.guardGate();
	//eudes.highFivesGuys();
	//charles.guardGate();
	//charles.highFivesGuys();
	
	return (0);
}
