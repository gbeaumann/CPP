#ifndef BITCOINEXCHANCE_HPP
# define BITCOINEXCHANCE_HPP

# include	<map>
# include	<iostream>
# include	<cstdio>
# include	<string>
# include	<fstream>


class	BitCoinExchange
{
	private:
		std::map<std::string, int>	_myMap;
	public:
		BitCoinExchange(void);
		BitCoinExchange(const BitCoinExchange &rhs);
		BitCoinExchange &operator=(const BitCoinExchange &rhs);
		~BitCoinExchange(void);

		void	creatDB(const std::string &dataFile);
		void	checkMap(void);

};

#endif