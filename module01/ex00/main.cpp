/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:46:54 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/01/05 15:47:13 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie_class.hpp"
#include	<iostream>
#include	<string>

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	first_zombie("Foo");
	first_zombie.announce();
	newZombie("New guy");
	randomChump("Chump");
	
	return (0);
}