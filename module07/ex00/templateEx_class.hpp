/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templateEx_class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:36:22 by gbeauman          #+#    #+#             */
/*   Updated: 2023/03/21 10:32:54 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATEEX_CLASS_HPP
# define TEMPLATEEX_CLASS_HPP

#include	<iostream>
#include	<string>

/*class	ExTemp
{
	public:
		ExTemp(void);
		ExTemp(const ExTemp &rhs);
		ExTemp	&operator=(const ExTemp &rhs);
		~ExTemp(void);
};*/	

template	<typename T>
void	swap(T &nbr1 , T &nbr2)
{
	T	stock = nbr1;
	nbr1 = nbr2;
	nbr2 = stock;
}

template	<typename T>
T	min(T nbr1, T nbr2)
{
	if (nbr1 < nbr2)
		return (nbr1);
	else
		return (nbr2);
}

template	<typename T>
T	max(T nbr1, T nbr2)
{
	if (nbr1 > nbr2)
		return (nbr1);
	else
		return (nbr2);
}
#endif
