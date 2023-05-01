#include	"Span_class.hpp"

int	main(void)
{
	//std::vector<unsigned int> 
	Span	test(5);
	try
	{

		test.addNumber(23);
		test.addNumber(5);
		test.addNumber(74);
		test.addNumber(1);
		test.addNumber(4);
		//test.addNumber(6);
		std::cout << test.myContainer.at(2) << std::endl;
	}
	catch	(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}