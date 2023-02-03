/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:24:06 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/01/05 11:24:08 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<iomanip>
#include	"PhoneBook.class.hpp"
#include	"Contact.class.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Phonebook constructor called" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Phonebook destructor called" << std::endl;
}

void	PhoneBook::search_ui(void)
{
	std::cout << std::setfill(' ') << std::setw(10) << "INDEX" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "NICKNAME" << "|" << std::endl;
}