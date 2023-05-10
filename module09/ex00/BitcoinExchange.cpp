#include	"BitcoinExchange.hpp"

//coplien
BitCoinExchange::BitCoinExchange(void){}

BitCoinExchange::BitCoinExchange(const BitCoinExchange &rhs)
{
	*this = rhs;
}

BitCoinExchange	&BitCoinExchange::operator=(const BitCoinExchange &rhs)
{
	if (this != &rhs)
		this->_myMap = rhs._myMap;
	return (*this);
}

BitCoinExchange::~BitCoinExchange(void) {}

//member fonctions

void	BitCoinExchange::creatDB(const std::string	&dataFile)
{
	std::string	line;
	std::ifstream	data;

	data.open(dataFile.c_str());
	if (!data.is_open())
		//throw exception

	std::getline(data, line);
	while (std::getline(data, line))
	{
		int	i = 0;
		std::string	stock;
		if ((i = line.find(",") != std::string::npos))
		{
			stock = line.substr(0, i);
			line.erase(0, i + 1);
		}
		this->_myMap[stock] = std::atoi(line.c_str());
	}
	data.close();
}

void	BitCoinExchange::checkMap(void)
{
	std::cout << this->_myMap["2010-09-10"] << std::endl;
}