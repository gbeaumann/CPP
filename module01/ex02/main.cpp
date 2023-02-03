/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:23:07 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/01/05 17:38:26 by gregoirebea      ###   ########.fr       */
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