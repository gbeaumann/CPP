#ifndef BITCOINEXCHANCE_HPP
# define BITCOINEXCHANCE_HPP

# include	<map>
# include	<iostream>
# include	<cstdlib>
# include	<string>
# include	<fstream>
# include	<ctime>
# include	<sstream>
# include	<iterator>


class	BitcoinExchange
{
	private:
		std::map<std::string, double>	_myMap;
		std::string					_date;
		double						_value;

	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &rhs);
		BitcoinExchange &operator=(const BitcoinExchange &rhs);
		~BitcoinExchange(void);

		std::string	getDate(void);
		double		getValue(void);

		void	creatDB(const std::string &dataFile);
		void	openFile(const std::string &inputFile);
		void	outputDB(void);

		void	checkDB(std::string line);
		bool	checkDate(std::string date);
		bool	checkYear(std::string year);
		bool	checkMonth(std::string month);
		bool	checkDay(std::string day);
		bool	checkValue(std::string value);

		class	WrongDateException : public std::exception
		{
			public:
				virtual	const char	*what() const throw();
		};

		class	WrongValueException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class	WrongInputException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class	CantOpenFileException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif