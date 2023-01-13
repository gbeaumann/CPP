#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include	<iostream>
#include	<string>

class	Fixed
{
	private:
		int					_nbr;
		static const int	_nbr_bit = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed	&operator=(const Fixed &copy);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif