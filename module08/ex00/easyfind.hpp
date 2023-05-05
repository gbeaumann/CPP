#ifndef	EASYFIND_HPP
# define EASYFIND_HPP

# include	<vector>
# include	<algorithm>
# include	<iostream>

class	NotFoundException : public std::exception
{
	public:
		virtual const char	*what() const throw()
		{
			return ("Exception: was not found in container");
		}
};

template	<typename T>		
typename T::iterator	easyfind(T &myContainer, int toFind)
{
	typename T::iterator	ret = std::find(myContainer.begin(), myContainer.end(), toFind);
	if (ret == myContainer.end())
		throw NotFoundException();
	else
		return (ret);
}

#endif
