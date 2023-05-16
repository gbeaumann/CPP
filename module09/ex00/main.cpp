#include	"BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	BitcoinExchange	test;
	if (argc < 2)
		return (0);
	try
	{
		test.creatDB("data.csv");
		test.openFile(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}