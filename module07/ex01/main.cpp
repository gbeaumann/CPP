/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:13:02 by gbeauman          #+#    #+#             */
/*   Updated: 2023/04/28 13:51:47 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"iter.hpp"

int main(void)
{
	const int	len = 3;
	std::string array[len] = {"salut", "coucou", "lapin"};
	int			arrayInt[len] = {1, 2, 3};
	double		arrayDouble[len] = {3.025, 4.153, 97.501};
	float		arrayFloat[len] = {3.025f, 4.153f, 97.501f};
	::iter(array, len, ft_print);
	std::cout << "<---------------->" << std::endl;
	::iter(arrayInt, len, ft_print);
	std::cout << "<---------------->" << std::endl;
	::iter(arrayDouble, len, ft_print);
	std::cout << "<---------------->" << std::endl;
	::iter(arrayFloat, len, ft_print);
	std::cout << "<---------------->" << std::endl;
	return (0);
}
