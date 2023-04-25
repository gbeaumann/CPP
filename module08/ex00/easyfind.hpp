#ifndef	EASYFIND_HPP
# define EASYFIND_HPP

# include	<iostream>
# include	<string>
# include	<array>

template	<typename	T>
typename T::iterator	easyFind(T& array, size_t find)
{
	typename T::iterator	ret;

	ret = std::find(array.begin(), array.end(), find);
	return (ret);
}

#endif