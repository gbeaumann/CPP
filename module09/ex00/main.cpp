#include	"BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	std::ifstream	test(argv[1]);
	std::string	line;
	if (argc < 1)
		return (0);
	while(std::getline(test, line))
		std::cout << line << std::endl;

	return (0);
}