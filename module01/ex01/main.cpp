/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:26:11 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/17 14:12:14 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie_class.hpp"
#include	<iostream>
#include	<string>
#include	<cstdlib>

Zombie	*zombieHorde(int N, std::string name);

int	main(int argc, char **argv)
{
	int	num;
	
	if (argc != 3)
	{
		std::cout << "Wrong number of arguments";
		return (0);
	}
	Zombie	*horde;
	num = atoi(argv[1]);
	horde = zombieHorde(num, argv[2]);
	
	delete [] horde;
	return (0);
}