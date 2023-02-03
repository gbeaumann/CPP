/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:21:21 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/03 09:31:35 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Weapon_class.hpp"
#include	"HumanA_class.hpp"
#include	"HumanB_class.hpp"
#include	<iostream>
#include	<string>

int	main(void)
{
	{
		Weapon	test = Weapon("gun");
		
		HumanA	bob("bob", test);
		bob.attack();
		test.setType("blade");
		bob.attack();
	}
	{
		Weapon test2 = Weapon("flower");
		
		HumanB	Charle("Charle");
		Charle.setWeapon(test2);
		Charle.attack();
		test2.setType("pickel");
		Charle.attack();
		
	}
	return (0);
}