#ifndef ITER_HPP
# define ITER_HPP

#include	<iostream>

template	<typename	T>
void	ft_print(T &toPrint)
{
	std::cout << toPrint << std::endl;
}

template	<typename	T>
void	iter(T *addr, int len, void(*myFonc)(T const &))
{
	for (int i = 0; i < len; i++)
		myFonc(addr[i]);
}

#endif
