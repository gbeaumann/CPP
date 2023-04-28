	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter_class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:53:43 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/09 11:55:42 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ScalarConverter_class.hpp"

// coplien

ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &rhs)
{
	*this = rhs;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &rhs)
{
	if (this != &rhs)
		std::cout << "Overload operator called" << std::endl;
	return(*this);
}

ScalarConverter::~ScalarConverter(void)
{}

// member fonctions

void	ScalarConverter::findType(std::string literal)
{
	if (literal.find(".") != std::string::npos)
	{
		if (literal.find("f") == literal.size() - 1)
			ScalarConverter::typeFloat(literal);
		else
			ScalarConverter::typeDouble(literal);
	}
	else if (ScalarConverter::isItInt(literal))
		ScalarConverter::typeInt(literal);
	else if (literal == "nan" || literal == "+inf" || literal == "-inf")
		ScalarConverter::pseudoDouble(literal);
	else if (literal == "nanf" || literal == "+inff" || literal == "-inff")
		ScalarConverter::pseudoFloat(literal);
	else if (literal.size() == 1)
		ScalarConverter::typeChar(literal);
}

bool	ScalarConverter::isDigit(std::string literal)
{
	if (literal.size() == 1)
	{
		if(literal[0] < 48 || literal[0] > 57)
			return (false);
	}
	return (true);
}

bool	ScalarConverter::isItInt(std::string literal)
{
	if (!ScalarConverter::isDigit(literal))
		return (false);
	for (size_t i = 0; i < literal.size(); i++)
	{
		if (literal[0] == 45)
			i++;
		else if ((literal[i] < 48 || literal[i] > 57))
		{
			std::cout << "Error: wrong number input" << std::endl;
			return (false);
		}
	}
	return (true);
}

void	ScalarConverter::typeFloat(std::string literal)
{
	float	typeFloat = std::atof(literal.c_str());
	int		typeInt = static_cast<int>(typeFloat);
	double	typeDouble = static_cast<double>(typeFloat);
	
	std::cout << "FLOAT" << std::endl;
	std::cout << "Float: " << typeFloat << "f" << std::endl;
	std::cout << "Int: " << typeInt << std::endl;
	std::cout << "Double: " << typeDouble << std::endl;
	if (typeInt >= 32 && typeInt <= 126)
	{
		char	typeChar = static_cast<char>(typeInt);
		std::cout << "Char: " << "'" << typeChar << "'" << std::endl;
	}
	else
		std::cout << "Char: Non displayable" <<std::endl;
	std::cout << "------------------" << std::endl;
}

void	ScalarConverter::pseudoFloat(std::string literal)
{
	literal.resize(literal.size() - 1);
	std::cout << "FLOAT" << std::endl;
	std::cout << "Float: " << literal << "f" << std::endl;
	std::cout << "Double: " << literal << std::endl;
	std::cout << "Int: impossible" << std::endl;
	std::cout << "Char: impossible" << std::endl;
}

void	ScalarConverter::typeDouble(std::string literal)
{
	double	typeDouble = std::strtod(literal.c_str(), NULL);
	int		typeInt = static_cast<int>(typeDouble);
	float	typeFloat = static_cast<float>(typeDouble);
	
	std::cout << "DOUBLE" << std::endl;
	std::cout << "Double: " << typeDouble << std::endl;
	std::cout << "Int: " << typeInt << std::endl;
	std::cout << "Float: " << typeFloat << "f" << std::endl;
	if (typeInt >= 32 && typeInt <= 126)
	{
		char	typeChar = typeInt;
		std::cout << "Char: " << "'" << typeChar << "'" << std::endl;
	}
	else
		std::cout << "Char: Non displayable" <<std::endl;
	std::cout << "------------------" << std::endl;
}

void	ScalarConverter::pseudoDouble(std::string literal)
{
	std::cout << "DOUBLE" << std::endl;
	std::cout << "Double: " << literal << std::endl;
	std::cout << "Int: impossible" << std::endl;
	std::cout << "Float: " << literal << "f" << std::endl;
	std::cout << "Char: impossible" << std::endl;
}

bool	ScalarConverter::typeInt(std::string literal)
{
	if (std::strtol(literal.c_str(), NULL, 10) > INT_MAX)
	{
		std::cout << "Error: int overflow" << std::endl;
		return (false);
	}
	else if (std::strtol(literal.c_str(), NULL, 10) < INT_MIN)
	{
		std::cout << "Error: int underflow" << std::endl;
		return (false);
	}
	int		typeInt = std::atoi(literal.c_str());
	double	typeDouble = static_cast<double>(typeInt);
	float	typeFloat = static_cast<float>(typeInt);
	
	std::cout << "INT" << std::endl;
	std::cout << "Int: " << typeInt << std::endl;
	std::cout << "Double: " << typeDouble << std::endl;
	std::cout << "Float: " << typeFloat << "f" << std::endl;
	if (typeInt >= 32 && typeInt <= 126)
	{
		char	typeChar = typeInt;
		std::cout << "Char: " << "'" << typeChar << "'" << std::endl;
	}
	else
		std::cout << "Char: Non displayable" <<std::endl;
	std::cout << "------------------" << std::endl;
	return (true);
}

void	ScalarConverter::typeChar(std::string literal)
{
	char	typeChar = static_cast<char>(literal[0]);
	int		typeInt = static_cast<int>(typeChar);
	float	typeFloat = static_cast<float>(typeChar);
	double	typeDouble = static_cast<double>(typeChar);
	
	std::cout << "CHAR" << std::endl;
	std::cout << "Char: " << "'" << typeChar << "'" << std::endl;
	std::cout << "Int: " << typeInt << std::endl;
	std::cout << "Float: " << typeFloat << std::endl;
	std::cout << "Double: " << typeDouble << std::endl;
	std::cout << "------------------" << std::endl;
}
