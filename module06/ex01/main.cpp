/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:16:55 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/14 10:54:32 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Serialize_class.hpp"

int	main(void)
{
	Data		data;
	Data		*restored;
	uintptr_t	result;

	data.n = 52;
	data.c = 'A';
	std::cout << "Original address: " << &data << std::endl;
	std::cout << "Original value (int)test: " << data.n << std::endl;

	result = Serialize::serialize(&data);

	std::cout << "Result value: " << result << std::endl;

	// Restore values
	std::cout << "Unintptr 'return' address: " << &result << std::endl;
	restored = Serialize::deserialize(result);
	std::cout << "Restored address " << restored << std::endl;
	std::cout << "Int restored value: " << restored->n << std::endl;
	std::cout << "Char restored value: " << restored->c << std::endl;
	return(0);
}