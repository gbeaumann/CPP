#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include	<iostream>
#include	<string>
#include	<cmath>

class	Fixed
{
	private:
		int					_nbr;
		static const int	_nbr_bit = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int nbr1);
		Fixed(const float nbr2);
		Fixed	&operator=(const Fixed &copy);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;	
};
std::ostream	&operator<<(std::ostream &os, const Fixed &copy);

#endif