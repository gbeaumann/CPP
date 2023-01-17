/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:13:21 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/17 19:44:51 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Cat_class.hpp"
#include	"Dog_class.hpp"
#include	"WrongCat_class.hpp"

int main()
{
	//const Animal* j = new Dog();
	//const Animal* i = new Cat();
	
	//delete j;//should not create a leak
	//delete i;

	const Animal	*animal[10];


	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animal[i] = new Dog();
		else if (i < 10)
			animal[i] = new Cat();
	}
	std::cout << std::endl;
	animal[2]->makeSound();
	animal[6]->makeSound();
	std::cout << std::endl;

		
	for (int i = 0; i < 10; i++)
	{
		if (animal[i])
			delete	animal[i];
	}

	return 0;
}