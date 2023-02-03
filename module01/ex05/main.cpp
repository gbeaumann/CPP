/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:23:16 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/01/10 12:32:53 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"harl_class.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	else
		harl.complain(argv[1]);
	return (0);
}
