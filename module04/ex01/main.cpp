/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:13:21 by gbeauman          #+#    #+#             */
/*   Updated: 2023/01/20 12:04:54 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Cat_class.hpp"
#include	"Dog_class.hpp"

/*int main()
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
}*/

int main( void )
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* k = new Cat();
    Cat i;

    i.getBrain()->setIdea(1, "mouse!");
    std::cout << "the cat i has one idea: " << i.getBrain()->getIdea(1) << std::endl;
    Cat c(i);
    std::cout << "the cat c has one idea: " << c.getBrain()->getIdea(1) << std::endl;
    i.getBrain()->setIdea(2, "more mouse!");
    std::cout << "the cat i has one idea: " << i.getBrain()->getIdea(2) << std::endl;
    std::cout << "has cat c one idea more?: " << c.getBrain()->getIdea(2) << std::endl;
    i = c;
    std::cout << "has the cat i has still 2 ideas: " << i.getBrain()->getIdea(2) << std::endl;
    std::cout << "the " << j->getType() << " makes ";
    j->makeSound();
    std::cout << "the " << i.getType() << " makes ";
    i.makeSound();
    std::cout << "the " << meta->getType() << " makes ";
    meta->makeSound();
    std::cout << "the " << c.getType() << " makes ";
    c.makeSound();


    delete meta;
    delete j;
    delete k;


    return 0;
}