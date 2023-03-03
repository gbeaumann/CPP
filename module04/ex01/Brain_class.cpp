/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain_class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:23:17 by gbeauman          #+#    #+#             */
/*   Updated: 2023/03/03 10:07:28 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Brain_class.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
	this->_Idea[i] = "empty";
	std::cout << "Brain default constructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_Idea[i] = rhs._Idea[i];
	}
	return (*this);
}

Brain::Brain(const Brain &rhs)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = rhs;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::setIdea(unsigned int ideaNum, const std::string idea)
{
	this->_Idea[ideaNum] = idea;
}

std::string	Brain::getIdea(unsigned int ideaNum) const
{
	return(this->_Idea[ideaNum]);
}
