/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:26:13 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/03 09:38:44 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<string>
#include	<fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	std::ifstream input(argv[1]);
	std::ofstream ouput("new_text.replace");
	std::string line;
	std::string old_str = argv[2];
	std::string	new_str = argv[3];
	while (std::getline(input, line))
	{
		std::size_t	pos = 0;
		while((pos = line.find(old_str, pos)) != std::string::npos)
		{
			std::string	pre = line.substr(0, pos);
			std::string	post = line.substr(pos + old_str.length());
			line = pre + new_str + post;
			pos += new_str.length();
		}
		ouput << line << std::endl;
	}
	ouput.close();
	return (0);
}