/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:13:21 by gbeauman          #+#    #+#             */
/*   Updated: 2023/03/03 11:21:10 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Cat_class.hpp"
#include	"Dog_class.hpp"

/*int main()
{
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
}*/

int main( void )
{
	const Animal	*animal[10];
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    Cat bis;

    bis.getBrain()->setIdea(1, "mouse!");
    std::cout << "the cat bis has one idea: " << bis.getBrain()->getIdea(1) << std::endl;
    Cat bob(bis);
    std::cout << "the cat bob has one idea: " << bob.getBrain()->getIdea(1) << std::endl;
    bis.getBrain()->setIdea(2, "more mouse!");
    std::cout << "the cat bis has one idea: " << bis.getBrain()->getIdea(2) << std::endl;
    std::cout << "Does cat bob have one more idea?: " << bob.getBrain()->getIdea(2) << std::endl;
    bis = bob;
    std::cout << "Does the cat bis still have 2 ideas: " << bis.getBrain()->getIdea(2) << std::endl;
	std::cout << "dog: ";
    dog->makeSound();
	std::cout << "bis: ";
    bis.makeSound();
	std::cout << "bob: ";
    bob.makeSound();

	std::cout << "-----------------------------------------------" << std::endl;

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

	std::cout << "-----------------------------------------------" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		if (animal[i])
			delete	animal[i];
	}

	std::cout << "-----------------------------------------------" << std::endl;

    delete dog;
    delete cat;


    return 0;
}
