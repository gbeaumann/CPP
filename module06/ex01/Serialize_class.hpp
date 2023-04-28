/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:16:48 by gbeauman          #+#    #+#             */
/*   Updated: 2023/04/26 11:02:45 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_CLASS_HPP
# define SERIALIZE_CLASS_HPP

#include	<iostream>
#include	<string>
#include	"Data_struct.hpp"

class	Serialize
{
	private:
		Serialize(void);
		Serialize(const Serialize &rhs);
		Serialize	&operator=(const Serialize &rhs);
		~Serialize(void);

	public:
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
};

#endif
