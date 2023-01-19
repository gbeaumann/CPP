/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:13:21 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/19 10:05:13 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Cat_class.hpp"
#include	"Dog_class.hpp"

int main()
{
	//const Animal* j = new Dog();
	//const Animal* i = new Cat();
	
	//delete j;//should not create a leak
	//delete i;

	const Animal	*animal[10];
	//Cat			test_copy;
	//Cat			copy(test_copy);

	//test_copy.makeSound();

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