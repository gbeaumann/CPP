/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:06:33 by gbeauman          #+#    #+#             */
/*   Updated: 2023/04/26 14:38:13 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Identify_class.hpp"

Base	*generate(void)
{
	srand(time(NULL));

	int random = rand() % 3;
	switch(random)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
		default:
			std::cout << "Error: random generation fail" << std::endl;
			break;
	}
	return (NULL);	
}

void	identify(Base *p)
{ 
	A	*a = dynamic_cast<A *>(p);
	B	*b = dynamic_cast<B *>(p);
	C	*c = dynamic_cast<C *>(p);

	if (a)
		std::cout << "Ptr A" << std::endl;
	else if (b)
		std::cout << "Ptr B" << std::endl;
	else if (c)
		std::cout << "Ptr C" << std::endl;
	else
		std::cout << "Error: pointer identification fail" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		std::cout << "Ref A" << std::endl;
		(void)a;
	}
	catch	(std::exception	&e)
	{
		std::cerr << "Ref A: error " << e.what() << std::endl;
	}
	try
	{
		B	&b = dynamic_cast<B &>(p);
		std::cout << "Ref B" << std::endl;
		(void)b;
	}
	catch	(std::exception	&e)
	{
		std::cerr << "Ref B: error " << e.what() << std::endl;
	}
	try
	{
		C	&c = dynamic_cast<C &>(p);
		std::cout << "Ref C" << std::endl;
		(void)c;
	}
	catch	(std::exception	&e)
	{
		std::cerr << "Ref C: error " << e.what() << std::endl;
	}
}

int main(void)
{
	Base	*base = generate();
	Base	&rbase = *base;
	identify(base);
	identify(rbase);

	if (base)
		delete base;
}
