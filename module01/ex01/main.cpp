/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:26:11 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/03 09:18:34 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Zombie_class.hpp"
#include	<iostream>
#include	<string>

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
	num = std::stoi(argv[1], nullptr, 10);
	horde = zombieHorde(num, argv[2]);
	horde[0].announce();
	
	delete [] horde;
	return (0);
}