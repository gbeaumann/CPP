#ifndef	EASYFIND_HPP
# define EASYFIND_HPP

# include	<iostream>
# include	<algorithm>
# include	<vector>

template	<typename	T>
typename T::iterator	easyFind(T &myContainer, int find)
{

	return (std::find(myContainer.begin(), myContainer.end(), find));

}

#endif