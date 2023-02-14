/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:29:03 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/14 11:42:20 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Identify_class.hpp"

Base	*Base::generate(void)
{
	srand(time(NULL));

	int rand = rand() % 3;
	switch(rand)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
		default:
			break;
	}
		
}