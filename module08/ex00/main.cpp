#include	"easyfind.hpp"

int	main(void)
{
	std::vector<int>	myContainer;
	std::vector<int>::iterator it;
	int	toFind = 3;
	int	errToFind = 6;

	for (int i = 0; i < 5; i++)
		myContainer.push_back(i);
	try
	{
		std::cout << "Try to find 3" << std::endl;
		it = easyfind(myContainer, toFind);
		std::cout << toFind << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Try to find 6" << std::endl;
		it = easyfind(myContainer, errToFind);
		std::cout << errToFind << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
