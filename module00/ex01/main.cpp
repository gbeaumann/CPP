/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:23:57 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/17 13:45:11 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<string>
#include	<cstdlib>
#include	"Contact.class.hpp"
#include	"PhoneBook.class.hpp"

int	main(void)
{
	int			i = 0;
	int 		maxSearch = 0;
	const int	size_max = 8;
	int			cont_index;
	std::string	str;
	PhoneBook	phonebook;
	
	while (1)
	{
		if (i == size_max)
			i = 0;
		std::cout << "Enter command 'ADD', 'SEARCH' OR 'EXIT': ";
		std::getline(std::cin, str);
		if (str.compare("ADD") == 0)
		{
			phonebook.contact[i].get_info(i);
			i++;
			if (maxSearch != size_max)
				maxSearch++;
		}
		else if (str.compare("EXIT") == 0)
			return (0);
		else if (str.compare("SEARCH") == 0)
		{
			phonebook.search_ui();
			for (int i3 = 0; i3 < maxSearch; i3++)
				phonebook.contact[i3].display_search();
			std::cout << "Enter the contact index: ";
			std::getline(std::cin, str);
			if (str.compare("0") != 0 && str.compare("1") != 0 && str.compare("2") != 0 && str.compare("3") != 0
			&& str.compare("4") != 0&& str.compare("5") != 0 && str.compare("6") != 0 && str.compare("7") != 0)
				std::cout << "Wrong index number, contact does not exist." << std::endl;
			else
			{
				cont_index = atoi(str.c_str());
				phonebook.contact[cont_index].print_contact();
			}
		}
		else
			std::cout << "Error: wrong input" << std::endl;
	}
	return (0);
}