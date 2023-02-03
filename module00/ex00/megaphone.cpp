/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:23:21 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/01/05 11:23:26 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<cctype>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	upper_c;

	i = 1;
	j = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			while (argv[i][j])
			{
				upper_c = toupper(argv[i][j]);
				std::cout << upper_c;
				j++;
			}
			std::cout << " ";
			j = 0;
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}