/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:09:15 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/16 11:51:11 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"SkavTrap_class.hpp"
#include	"FragTrap_class.hpp"

int	main(void)
{
	//ClapTrap	charles("Charles");
	//SkavTrap	eudes("Eudes");
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
	bichette.highFivesGuys();
	//bichette.guardGate();
	//eudes.highFivesGuys();
	//charles.guardGate();
	//charles.highFivesGuys();
	
	return (0);
}
