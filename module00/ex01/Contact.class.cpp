/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:23:36 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/17 15:46:06 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<iomanip>
#include	<string>
#include	"Contact.class.hpp"

Contact::Contact(void)
{
	std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact destructor called" << std::endl;
}

void	Contact::_check_lenght(std::string *str)
{
	if (str->length() > 10)
	{
		str->resize(9);
		str->push_back('.');
	}
}

void	Contact::get_info(int cont_num)
{
	this->_index = cont_num;
	std::cout << "Enter your contact informations" << std::endl;
	std::cout << "Index num: " << this->_index << std::endl;
	std::cout << "First name: ";
	std::getline(std::cin, this->_first_name);
	while (this->_first_name.empty())
	{
		std::cout << "First name: ";
		std::getline(std::cin, this->_first_name);
	}
	_check_lenght(&_first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, this->_last_name);
	while (this->_last_name.empty())
	{
		std::cout << "Last name: ";
		std::getline(std::cin, this->_last_name);
	}
	_check_lenght(&_last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->_nickname);
	while (this->_nickname.empty())
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, this->_nickname);
	}
	_check_lenght(&_nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, this->_phone_number);
	while (this->_phone_number.empty())
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, this->_phone_number);
	}
	_check_lenght(&_phone_number);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->_darkest_secret);
	while (this->_darkest_secret.empty())
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, this->_darkest_secret);
	}
	_check_lenght(&_darkest_secret);
}

void	Contact::display_search(void)
{
	std::cout << std::setfill(' ') << std::setw(10) << this->_index << "|";
	std::cout << std::setfill(' ') << std::setw(10) << this->_first_name << "|";
	std::cout << std::setfill(' ') << std::setw(10) << this->_last_name << "|";
	std::cout << std::setfill(' ') << std::setw(10) << this->_nickname << "|" << std::endl;
}

void	Contact::print_contact(void)
{
	if (this->_first_name.length() == 0)
		std::cout << "Wrong index number, contact does not exist." << std::endl;
	else
	{
		std::cout << "First name: " << this->_first_name << std::endl;
		std::cout << "Last name: " << this->_last_name << std::endl;
		std::cout << "Nickname: " << this->_nickname << std::endl;
		std::cout << "Phone number: " << this->_phone_number << std::endl;
		std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
	}
}