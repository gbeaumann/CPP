/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:30:22 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/23 11:03:47 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Fixed_class.hpp"

int	main(void)
{
	Fixed a;
	Fixed b(3);
	Fixed c(3);
	Fixed d(4);
	Fixed e(0);
	
	std::cout << b << std::endl;
	std::cout << d / b << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << e << std::endl;

	if (a < b)
		std::cout << "coucou 1" << std::endl;
	if (b > a)
		std::cout << "coucou 2" << std::endl;
	if (b == c)
		std::cout << "coucou 3" << std::endl;
	if (a != c)
		std::cout << "coucou 4" << std::endl;
	if (a <= b && c <= b)
		std::cout << "coucou 5" << std::endl;
	if (c >= b && d >= b)
		std::cout << "coucou 6" << std::endl;
	
	std::cout << "Minimum between '" << a << "' and '" << d << "': " << Fixed::min( d, a ) << std::endl;
	std::cout << "Maxumum between '" << a << "' and '" << d << "': " << Fixed::max( a, d ) << std::endl;
	
	return (0);
}