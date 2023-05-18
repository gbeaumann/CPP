#include	"PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMe	mergeMe;
	if (argc < 3)
		return (0);
	try
	{
		mergeMe.checkInput(argc, argv);
		mergeMe.printBefore();
		mergeMe.fillList();
		//mergeMe.printList();
		mergeMe.mergeInsertVector();
		mergeMe.mergeInsertList();

	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}