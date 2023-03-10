/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify_class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:16:15 by gbeauman          #+#    #+#             */
/*   Updated: 2023/02/14 16:01:09 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_CLASS_HPP
# define IDENTIFY_CLASS_HPP

#include	<iostream>
#include	<string>
#include	<time.h>

class	Base
{
	public:
		virtual	~Base(void);
		Base	*generate(void);
		void	identify(Base *p);
		void	identify(Base &p);
};

class	A : public Base{};
class	B : public Base{};
class	C : public Base{};




#endif