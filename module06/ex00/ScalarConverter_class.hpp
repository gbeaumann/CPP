/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter_class.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:50:13 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/09 15:21:27 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_CLASS_HPP
# define SCALARCONVERTER_CLASS_HPP

#include	<string>
#include	<iostream>
#include	<cstdlib>
#include	<climits>

class	ScalarConverter
{
	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &rhs);
		ScalarConverter &operator=(const ScalarConverter &rhs);
		~ScalarConverter(void);
		
	public:
		static void	findType(std::string literal);
		static bool	isItInt(std::string literal);
		static void	typeFloat(std::string literal);
		static void	pseudoFloat(std::string literal);
		static void	typeDouble(std::string literal);
		static void	pseudoDouble(std::string literal);
		static bool	typeInt(std::string literal);
		static void	typeChar(std::string literal);
};

#endif