#include	"BitcoinExchange.hpp"

// ------------- coplien -------------
BitcoinExchange::BitcoinExchange(void){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &rhs)
{
	*this = rhs;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
		this->_myMap = rhs._myMap;
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void) {}

// ------------- member fonctions -------------

void	BitcoinExchange::creatDB(const std::string	&dataFile)
{
	std::string		line;
	std::ifstream	data;

	data.open(dataFile.c_str());
	if (!data.is_open())
		throw BitcoinExchange::CantOpenFileException();

	std::getline(data, line);
	while (std::getline(data, line))
	{
		std::string	stock;
		unsigned long	i = 0;
		if ((i = line.find(",")) != std::string::npos)
		{
			stock = line.substr(0, i);
			line.erase(0, i + 1);
		}
		this->_myMap[stock] = std::atof(line.c_str());
	}
	data.close();
}

void	BitcoinExchange::openFile(const std::string &inputFile)
{
	std::ifstream	file;
	std::string		line;

	file.open(inputFile.c_str());
	if (!file.is_open())
		throw BitcoinExchange::CantOpenFileException();
	std::getline(file, line);
	while (std::getline(file, line))
	{
		try
		{
			this->checkDB(line);
			this->outputDB();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << " => " << line << std::endl;
		}
	}
	file.close();
}

void	BitcoinExchange::outputDB(void)
{
	std::map<std::string, double>::iterator	it = this->_myMap.lower_bound(this->getDate());
	if (it == this->_myMap.end())
	{
		it--;
		std::cout << it->first << " => " << this->getValue() << " = " << it->second * this->getValue() << std::endl;
		return;
	}
	if (it == this->_myMap.begin())
	{
		std::cout << it->first << " => " << this->getValue() << " = " << it->second * this->getValue() << std::endl;
		return;
	}
	if (it->first == this->getDate())
	{
		std::cout << it->first << " => " << this->getValue() << " = " << it->second * this->getValue() << std::endl;
		return;
	}
	else
	{
		std::map<std::string, double>::iterator	preIt = it;
		preIt--;
		std::cout << preIt->first << " => " << this->getValue() << " = " << preIt->second * this->getValue() << std::endl;
	}
}

// ------------- checker -------------

void	BitcoinExchange::checkDB(std::string line)
{
	std::string	stock;
	std::string	date;
	std::string	value;
	int			pos;
	
	stock = line;
	pos = stock.find("|");
	if (pos < 0)
		throw BitcoinExchange::WrongInputException();
	date = stock.substr(0, pos -1);
	stock.erase(0, pos + 1);
	checkDate(date);
	value = stock;
	if (!checkValue(value))
		throw BitcoinExchange::WrongValueException();
	this->_date = date;
}

bool	BitcoinExchange::checkDate(std::string date)
{
	std::string	stock;
	std::string	year;
	std::string	month;
	std::string	day;
	int			pos;
	
	stock = date;
	pos = stock.find("-");
	{
		year = stock.substr(0, pos);
		if (!this->checkYear(year))
			throw	BitcoinExchange::WrongDateException();
		stock.erase(0, pos + 1);
	}
	pos = stock.find("-");
	{
		month = stock.substr(0, pos);
		if (!this->checkMonth(month))
			throw	BitcoinExchange::WrongDateException();
		stock.erase(0, pos + 1);
	}
	day = stock;
	if (!this->checkDay(day))
		throw	BitcoinExchange::WrongDateException();

	return (0);
}

bool	BitcoinExchange::checkYear(std::string year)
{
	int	date;

	date = std::atoi(year.c_str());
	if (date < 2009 || date > 9999)
		return (0);
	return (1);
}

bool	BitcoinExchange::checkMonth(std::string month)
{
	int	date;

	date = std::atoi(month.c_str());
	if (date < 1 || date > 12)
		return (0);
	return (1);
}

bool	BitcoinExchange::checkDay(std::string day)
{
	int	date;

	date = std::atoi(day.c_str());
	if (date < 1 || date > 31)
		return (0);
	return (1);
}

bool	BitcoinExchange::checkValue(std::string value)
{
	double	nbr;

	nbr = std::atof(value.c_str());
	if (nbr < 0 || nbr > 1000)
		return (0);
	this->_value = nbr;
	return (1);
}

// ------------- getter -------------

std::string	BitcoinExchange::getDate(void)
{
	return (this->_date);
}

double	BitcoinExchange::getValue(void)
{
	return (this->_value);
}

// ------------- exception -------------
const char *BitcoinExchange::WrongDateException::what() const throw()
{
	return ("Exception: wrong date");
}

const char *BitcoinExchange::WrongValueException::what() const throw()
{
	return ("Exception: wrong value");
}

const char *BitcoinExchange::WrongInputException::what() const throw()
{
	return ("Exception: wrong input");
}

const char	*BitcoinExchange::CantOpenFileException::what() const throw()
{
	return ("Exception: can't open file");
}
