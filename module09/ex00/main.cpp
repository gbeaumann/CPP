#include	"BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	BitCoinExchange	test;
	if (argc < 1)
		return (0);
	test.creatDB(argv[1]);
	test.checkMap();

	return (0);
}