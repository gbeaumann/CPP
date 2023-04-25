/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:32:10 by gbeauman          #+#    #+#             */
/*   Updated: 2023/03/23 11:02:24 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Array_class.hpp"
#include	"Array_class.tpp"


#define TAB_SIZE 15
int main(void)
{
	Array<std::string> c(12);
	std::cout << "size of c = " << c.size() << std::endl;
	Array<int> a(TAB_SIZE);

	try
	{
		for (size_t i = 0; i < TAB_SIZE; i++)
			a[i] = i;
		const Array<int> a_const(a);
		for (size_t i = 0; i < TAB_SIZE; i++)
			std::cout << "a[" << i << "] " << a_const[i] << '\n';
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Array<int> b(a);

		b[0] = 8;
		std::cout << "b:" << b[0] << std::endl;
		std::cout << "a:" << a[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';	
	}
	return (0);
}

/*int main(void)
{
	Array<int>	a;
	Array<int>	b(5);
	std::cout << "lenght: " << b.size() << std::endl;
	b.setArray(0, 1);
	b.setArray(1, 2);
	b.setArray(2, 3);
	b.setArray(3, 4);
	b.setArray(4, 5);
	b.setArray(5, 6);


	return (0);
}*/