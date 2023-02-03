/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl_class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:23:36 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/01/10 12:43:44 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"harl_class.hpp"

Harl::Harl(void)
{
	std::cout << "Harl comes in" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl leaves like a king" << std::endl;
}

void	Harl::_debug(void)
{
	std::cout << "DEBUG:" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "INFO:" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "WARNING:" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "ERROR:" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	if (level.compare("DEBUG") == 0 || level.compare("INFO") == 0 || level.compare("WARNING") == 0 || level.compare("ERROR") == 0)
	{
		std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		ptr_ft	tab_ft[] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
		for (size_t i = 0; i < tab->size(); i++)
		{
			if (level == tab[i])
				(this->*tab_ft[i])();
		}
	}
	else
		std::cout	<< "Harl stand still" << std::endl;
}