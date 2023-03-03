/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:13:21 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/27 13:29:05 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Cat_class.hpp"
#include	"Dog_class.hpp"
#include	"WrongCat_class.hpp"

int main()
{
	const Animal	*animal = new Animal();
	const Animal	*dog = new Dog();
	const Animal	*cat = new Cat();
	
	const WrongAnimal	*wrongA = new WrongAnimal();
	const WrongAnimal	*wrongC = new WrongCat();
	
	std::cout << "Animal type: " << animal->getType() << std::endl;
	std::cout << "Animal type: " << dog->getType() << std::endl;
	std::cout << "Animal type: " << cat->getType() << std::endl;
	
	std::cout << "Wrong animal type: " << wrongA->getType() << std::endl;
	std::cout << "Wrong animal type: " << wrongC->getType() << std::endl;
	
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();
	
	wrongA->makeSound();
	wrongC->makeSound();

	delete	animal;
	delete	dog;
	delete	cat;
	
	delete	wrongA;
	delete	wrongC;

	return 0;
}
