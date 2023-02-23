/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:23:16 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/17 14:31:40 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"harl_class.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	Harl	harl;
	harl.complain(argv[1]);
	return (0);
}
