#ifndef ITER_HPP
# define ITER_HPP

#include	<iostream>
#include	<string>

template	<typename	T>
void	ft_print(T &toPrint)
{
	std::cout << toPrint << std::endl;
}

template	<typename	T>
void	iter(T *addr, int len, void(*ft_print)(T const &))
{
	for (int i = 0; i < len; i++)
		ft_print(addr[i]);
}

#endif
