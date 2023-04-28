/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:32:10 by gbeauman          #+#    #+#             */
/*   Updated: 2023/04/28 13:57:52 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Array_class.hpp"
#include	"Array_class.tpp"


#define TAB_SIZE 5

int main(void)
{
	Array<int>	tabInt(TAB_SIZE);
	Array<int>	copyTabInt;
	
	try
	{
		std::cout << "Size of tabInt: " << tabInt.size() << std::endl;
		std::cout << "--- Original array ---" << std::endl;
		for (size_t i = 0; i < TAB_SIZE; i++)
		{
			tabInt[i] = i;
			std::cout << "tabInt[" << i << "] = " << tabInt[i] << std::endl;
		}
		copyTabInt = tabInt;
		size_t	i2 = TAB_SIZE;
		std::cout << "--- Changed array ---" << std::endl;
		for (size_t i = 0; i < TAB_SIZE; i++)
		{
			tabInt[i] = i2--;
			std::cout << "tabInt[" << i << "] = " << tabInt[i] << std::endl;
		}
		std::cout << "--- Copied array ---" << std::endl;
		for (size_t i = 0; i < TAB_SIZE; i++)
			std::cout << "copyTabInt[" << i << "] = " << copyTabInt[i] << std::endl;
	}
	catch	(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	Array<std::string>	tabString(3);
	Array<std::string>	copyTabString;
	std::cout << "--- String array ---" << std::endl;
	try
	{
		tabString[0] = "Salut";
		tabString[1] = "les";
		tabString[2] = "pipous";

		copyTabString = tabString;
		copyTabString[2] = "lapin";

		std::cout << "tabString[2]: " << tabString[2] << std::endl;
		std::cout << "copyTabString[2]: " << copyTabString[2] << std::endl;
	}
	catch	(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--- Exceptions ---" << std::endl;

	try
	{
		std::cout << "Try to acces tabString[3]" << std::endl;
		std::cout << tabString[3] << std::endl;
	}

	catch	(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
