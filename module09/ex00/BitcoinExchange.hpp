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
		BitCoinExchange	&operateur=(const BitCoinExchange &rhs);
		~BitCoinExchange(void);

		void	creatDB(std::ifstream &data);

};

#endif