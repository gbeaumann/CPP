#include	"easyfind.hpp"

int	main(void)
{
	std::array<int, 5> myArray = {1, 2, 3, 4, 5};

	std::cout << easyFind(myArray, 3) << std::endl;
	return (0);
}