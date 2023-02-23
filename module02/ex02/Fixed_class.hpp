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
		float				_ft_pow(int base, int value) const;
	
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int nbr1);
		Fixed(const float nbr2);
		~Fixed();
		Fixed	&operator=(const Fixed &copy);

		Fixed	operator+(const Fixed &copy) const;
		Fixed	operator-(const Fixed &copy) const;
		Fixed	operator*(const Fixed &copy) const;
		Fixed	operator/(const Fixed &copy) const;

		bool	operator<(const Fixed &copy) const;
		bool	operator>(const Fixed &copy) const;
		bool	operator==(const Fixed &copy) const;
		bool	operator!=(const Fixed &copy) const;
		bool	operator<=(const Fixed &copy) const;
		bool	operator>=(const Fixed &copy) const;
		
		Fixed	operator++();
		Fixed	operator++(int);
		Fixed	operator--();
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed	min(Fixed &nbr1, Fixed &nbr2);
		static Fixed	min(const Fixed &nbr1, const Fixed &nbr2);
		static Fixed	max(Fixed &nbr1, Fixed &nbr2);
		static Fixed	max(const Fixed &nbr1, const Fixed &nbr2);
		
};
std::ostream	&operator<<(std::ostream &os, const Fixed &copy);

#endif