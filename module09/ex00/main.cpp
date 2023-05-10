#include	"BitcoinExchange.hpp"

// check sujet si trouve pas date, prendre date la plus proche (avant)

int	main(int argc, char **argv)
{
	BitcoinExchange	test;
	if (argc < 2)
		return (0);
	test.creatDB("data.csv");
	test.openFile(argv[1]);

	//test.checkMap();

	return (0);
}