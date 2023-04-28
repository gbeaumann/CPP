#include	"easyfind.hpp"

int	main(void)
{
	std::vector<int> myContainer {1, 2, 3, 4, 5};
	std::vector<int>::iterator	ret;
	int	toFind = 3;

	ret = easyFind(myContainer, toFind);
	return (0);
}