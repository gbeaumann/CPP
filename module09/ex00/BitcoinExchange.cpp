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

void	BitcoinExchange::openFile(const std::string &inputFile)
{
	std::ifstream	file;
	std::string		line;

	file.open(inputFile.c_str());
	//if (!file.is_open())
		//throw exception
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
	std::map<std::string, int>::iterator	it = this->_myMap.find(this->getDate());	
	if (it != this->_myMap.end())
		std::cout << this->getDate() << " => " << this->getValue() << " = " << it->second * this->getValue() << std::endl;
	else
		throw BitcoinExchange::InputNotInFileException();
}


// ------------- checker -------------

void	BitcoinExchange::checkDB(std::string line)
{
	std::string	stock;
	std::string	date;
	std::string	value;
	int			pos;
	
	//std::cout << line << std::endl;
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
	if (date < 1000 || date > 9999)
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
	float	nbr;

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

float	BitcoinExchange::getValue(void)
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

const char	*BitcoinExchange::InputNotInFileException::what() const throw()
{
	return ("Exception: input not in file");
}

//test

void	BitcoinExchange::checkMap(void)
{
	std::cout << this->_myMap["2010-09-10"] << std::endl;
}