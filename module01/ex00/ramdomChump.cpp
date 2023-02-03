/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ramdomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:36:52 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/01/05 15:43:59 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie_class.hpp"
#include	<iostream>
#include	<string>

void	randomChump(std::string name)
{
	Zombie	chump = Zombie(name);
	chump.announce();
}