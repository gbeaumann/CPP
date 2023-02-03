/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoirebeaumann <gregoirebeaumann@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:23:48 by gregoirebea       #+#    #+#             */
/*   Updated: 2023/02/03 08:03:38 by gregoirebea      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include	<iostream>
#include	<string>

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
	void	_check_lenght(std::string *str);

public:
	Contact(void);
	~Contact(void);
	
	void	get_info(int cont_num);
	void	display_search(void);
	void	print_contact(void);
	int		index;
};


#endif