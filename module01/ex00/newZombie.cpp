/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:22:25 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/01/05 15:35:33 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie_class.hpp"
#include	<iostream>
#include	<string>

Zombie	*newZombie(std::string name)
{
	Zombie	*newZombie = new Zombie(name);
	newZombie->announce();
	delete newZombie;
	return (0);
}