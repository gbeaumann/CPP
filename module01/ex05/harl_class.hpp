/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl_class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:37:56 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/01/10 12:30:36 by gregoirebea      ###   ########.fr       */
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