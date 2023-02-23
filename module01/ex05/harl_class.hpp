/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl_class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:37:56 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/21 11:40:28 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_HPP
# define HARL_CLASS_HPP

#include	<iostream>
#include	<string>

class		Harl
{
	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
		
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);
		typedef	void	(Harl::*ptr_ft)(void);
		
};

#endif