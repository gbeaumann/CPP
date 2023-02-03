/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:24:14 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/03 08:03:27 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include	"Contact.class.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		
		Contact	contact[8];
		void	search_ui(void);
};


#endif