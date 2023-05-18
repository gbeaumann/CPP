#include "RPN.hpp"

int main(int argc, char **argv)
{
	RPN	test;
	if (argc != 2)
	{
		std::cout << "Error: Wrong number of inputs" << std::endl;
		return (0);
	}
	try
	{
		test.calculator(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}