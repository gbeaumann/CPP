#include	"Span_class.hpp"

int	main(void)
{
	std::cout << " --- Normal test --- " << std::endl;
	Span	test(5);
	try
	{

		test.addNumber(23);
		test.addNumber(5);
		test.addNumber(74);
		test.addNumber(-1);
		test.addNumber(16);

		test.shortestSpan();
		test.longestSpan();
	}
	catch	(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << " --- Exceed size test --- " << std::endl;
	Span	big(2);
	try
	{
		big.addNumber(8);
		big.addNumber(987);
		big.addNumber(32);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << " --- Empty test --- " << std::endl;
	Span	exception;
	try
	{
		exception.longestSpan();
		exception.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << " --- Random test --- " << std::endl;
	srand(time(NULL));
	unsigned int	randnum = 10;
	Span	testRand(randnum);
	std::vector<int>	randStock;

	for (size_t i = 0; i < randnum; i++)
	{
		randStock.push_back(rand() % 1000);
		std::cout << randStock[i] << " ";
	}
	std::cout << std::endl;
	
	try
	{
		testRand.addNumber(randStock.begin(), randStock.end());
		testRand.longestSpan();
		testRand.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	return (0);
}