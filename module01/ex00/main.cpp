/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:46:54 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/21 15:14:07 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie_class.hpp"
#include	<iostream>
#include	<string>

int	main(void)
{
	Zombie	first_zombie("Foo");
	Zombie	*newGuy = newZombie("New guy");
	newGuy->announce();
	first_zombie.announce();
	randomChump("Chump");

	delete newGuy;
	
	return (0);
}