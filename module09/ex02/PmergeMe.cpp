#include	"PmergeMe.hpp"

// ------- Coplien -------

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(const PmergeMe &rhs)
{
	*this = rhs;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &rhs)
{
	if (this != &rhs)
	{
		this->_myVector = rhs._myVector;
		this->_myList = rhs._myList;
	}
	return (*this);
}

PmergeMe::~PmergeMe(void) {}

// ------- Memeber fonctions -------

void	PmergeMe::checkInput(int argc, char **argv)
{
	int	stock = 0;

	for (int i = 1; i < argc; i++)
	{
		if ((stock = std::atoi(argv[i])) < 0)
			throw	PmergeMe::NegativeNumberException();
		else
			this->_stockVector.push_back(stock);
	}
}

// ------- Memeber fonctions Vector -------

void	PmergeMe::mergeInsertVector(void)
{
	clock_t startVector = clock();
	int	a;
	int	b;

	while (this->_stockVector.size() > 1)
	{
		a = this->_stockVector[0];
		b = this->_stockVector[1];
		this->_stockVector.erase(this->_stockVector.begin());
		this->_stockVector.erase(this->_stockVector.begin());
		if (a < b)
		{
			this->_myVector.push_back(a);
			this->_upperNumberVector.push_back(b);
		}
		else
		{
			this->_myVector.push_back(b);
			this->_upperNumberVector.push_back(a);
		}
	}
	if (this->_stockVector.size() == 1)
	{
		this->_upperNumberVector.push_back(_stockVector[0]);
		this->_stockVector.erase(this->_stockVector.begin());
	}
	std::sort(this->_myVector.begin(), this->_myVector.end());
	this->sortVector();
	clock_t	endVector = clock();
	this->printAfter();
	this->printTimeVector(startVector, endVector);
}

void	PmergeMe::sortVector(void)
{
	while (this->_upperNumberVector.size() > 0)
	{
		std::vector<int>::iterator	mid = this->_myVector.begin() + (this->_myVector.size() / 2);
		int	midValueIndex = (this->_myVector.size() / 2);

		if (this->_myVector.size() == 2)
			midValueIndex = 0;

		if (this->_upperNumberVector[0] > this->_myVector[midValueIndex])
		{
			this->_myVector.insert(mid + 1, this->_upperNumberVector[0]);
			std::sort((this->_myVector.begin() + midValueIndex + 1), this->_myVector.end());
			this->_upperNumberVector.erase(this->_upperNumberVector.begin());
		}
		else if (this->_upperNumberVector[0] < this->_myVector[midValueIndex])
		{
			this->_myVector.insert(this->_myVector.begin(), this->_upperNumberVector[0]);
			std::sort(this->_myVector.begin(), (this->_myVector.begin() + midValueIndex));
			this->_upperNumberVector.erase(this->_upperNumberVector.begin());
		}
		else if (this->_upperNumberVector[0] == this->_myVector[midValueIndex])
		{
			this->_myVector.insert(mid + 1, this->_upperNumberVector[0]);
			this->_upperNumberVector.erase(this->_upperNumberVector.begin());
		}
	}
}

// ------- Memeber fonctions List -------

void	PmergeMe::fillList(void)
{
	for (size_t i = 0; i < this->_stockVector.size(); i++)
		this->_stockList.push_back(this->_stockVector[i]);
}

void	PmergeMe::mergeInsertList(void)
{
	clock_t startList = clock();
	int	a;
	int	b;

	while (this->_stockList.size() > 1)
	{
		a = this->_stockList.front();
		this->_stockList.erase(this->_stockList.begin());
		b = this->_stockList.front();
		this->_stockList.erase(this->_stockList.begin());
		if (a < b)
		{
			this->_myList.push_back(a);
			this->_upperNumberList.push_back(b);
		}
		else
		{
			this->_myList.push_back(b);
			this->_upperNumberList.push_back(a);
		}
	}
	if (this->_stockList.size() == 1)
	{
		this->_upperNumberList.push_back(_stockList.front());
		this->_stockList.erase(this->_stockList.begin());
	}
	this->_myList.sort();
	this->sortList();
	clock_t	endList = clock();
	//this->printAfter();
	this->printTimeList(startList, endList);
}

void	PmergeMe::sortList(void)
{
	while (this->_upperNumberList.size() > 0)
	{

		std::list<int>::iterator	mid = this->_myList.begin();
		std::advance(mid, this->_myList.size() / 2);

		if (this->_upperNumberList.front() > *mid)
		{
			std::advance(mid, (this->_myList.size() / 2) + 1);
			this->_myList.insert(mid, this->_upperNumberList.front());
			this->_myList.sort();
			this->_upperNumberList.erase(this->_upperNumberList.begin());
		}
		else if (this->_upperNumberList.front() < *mid)
		{
			this->_myList.insert(this->_myList.begin(), this->_upperNumberList.front());
			this->_myList.sort();
			this->_upperNumberList.erase(this->_upperNumberList.begin());
		}
		else if (this->_upperNumberList.front() == *mid)
		{
			std::advance(mid, (this->_myList.size() / 2) + 1);
			this->_myList.insert(mid, this->_upperNumberList.front());
			this->_upperNumberList.erase(this->_upperNumberList.begin());
		}
	}
}

// ------- Print -------

void	PmergeMe::printBefore(void)
{
	std::cout << "Before: ";
	for (size_t i = 0; i < this->_stockVector.size(); i++)
		std::cout << this->_stockVector[i] << " ";
	std::cout << std::endl;
}

void	PmergeMe::printAfter(void)
{
	std::cout << "After: ";
	for (size_t i = 0; i < this->_myVector.size(); i++)
		std::cout << this->_myVector[i] << " ";
	std::cout << std::endl;
}

void	PmergeMe::printTimeVector(clock_t startVector, clock_t endVector)
{
	double	durationTime = static_cast<double>(endVector - startVector) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << this->_myVector.size() << " elements with std::vector: " << durationTime * 100 << " us" << std::endl;
}

void	PmergeMe::printTimeList(clock_t startList, clock_t endList)
{
	double	durationTime = static_cast<double>(endList - startList) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << this->_myList.size() << " elements with std::list: " << durationTime * 100 << " us" << std::endl;
}


// -------- Exception -------

const char	*PmergeMe::NegativeNumberException::what() const throw()
{
	return ("Exception: at least one of the input is negative");
}

// test

void	PmergeMe::printList(void)
{
	for (std::list<int>::iterator it = this->_myList.begin(); it != this->_myList.end(); ++it)
        std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::printVector(void)
{
	for (size_t i = 0; i < this->_myVector.size(); i++)
		std::cout << this->_myVector[i] << " ";
	std::cout << std::endl;
}