#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include	<iostream>
#include	<vector>
#include	<list>
#include	<cstdlib>
#include	<algorithm>
#include	<ctime>

class	PmergeMe
{
	private:
		std::vector<int>	_myVector;
		std::vector<int>	_stockVector;
		std::vector<int>	_upperNumberVector;

		std::list<int>		_myList;
		std::list<int>		_stockList;
		std::list<int>		_upperNumberList;
	
	public:
		PmergeMe(void);
		PmergeMe(const PmergeMe &rhs);
		PmergeMe &operator=(const PmergeMe &rhs);
		~PmergeMe(void);

		void	checkInput(int argc, char **argv);
		void	printBefore(void);
		void	printAfter(void);

		// ------- Vector -------

		void	mergeInsertVector(void);
		void	sortVector(void);

		void	printTimeVector(clock_t startVector, clock_t endVector);

		// -------- List -------

		void	fillList(void);
		void	mergeInsertList(void);
		void	sortList(void);

		void	printTimeList(clock_t startList, clock_t endList);

		// test

		void	printList(void);
		void	printVector(void);



	class	NegativeNumberException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif