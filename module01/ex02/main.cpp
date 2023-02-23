/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:23:07 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/17 14:16:17 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<string>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "String address: " << &brain << std::endl;
	std::cout << "Address PTR: " << stringPTR << std::endl;
	std::cout << "Address REF " << &stringREF << std::endl;
	std::cout << "Brain: " << brain << std::endl;
	std::cout << "String PTR: " << *stringPTR << std::endl;
	std::cout << "String REF: " << stringREF << std::endl;
	
	return (0);
}