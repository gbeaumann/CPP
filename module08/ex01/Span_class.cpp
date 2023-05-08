#include	"Span_class.hpp"


//coplien

Span::Span(void) : _N(0)
{}

Span::Span(unsigned int N) : _N(N)
{}

Span::Span(const Span &rhs)
{
	*this = rhs;
}

Span	&Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
		this->myContainer = rhs.myContainer;
	}
	return (*this);
}

Span::~Span(void)
{}

// fonction membre

 unsigned int	Span::getMaxNum(void) const
{
	return (this->_N);
}

void	Span::addNumber(int num)
{
	if	(this->myContainer.size() < this->getMaxNum())
		this->myContainer.push_back(num);
	else
		throw Span::OutOfBoundException();
}

void	Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->myContainer.size() >= this->getMaxNum())
		throw Span::OutOfBoundException();
	try
	{
		while (begin != end)
		{
			if (this->myContainer.size() >= this->getMaxNum())
				throw Span::OutOfBoundException();
			this->addNumber(*begin);
			begin++;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

void	Span::shortestSpan(void)
{
	if (this->getMaxNum() == 0)
		throw Span::EmptyContainerException();

	int min_diff;
	std::vector<int>	diff;

	std::sort(this->myContainer.begin(), this->myContainer.end());
	std::adjacent_difference(this->myContainer.begin(), this->myContainer.end(), std::back_inserter(diff));

    min_diff = *std::min_element(diff.begin() + 1, diff.end());

	std::cout << min_diff << std::endl;
}

void	Span::longestSpan(void)
{
	if (this->getMaxNum() == 0)
		throw Span::EmptyContainerException();
	int					max_diff;

	std::sort(this->myContainer.begin(), this->myContainer.end());
	max_diff = *std::max_element(this->myContainer.begin(), this->myContainer.end()) -
				*std::min_element(this->myContainer.begin(), this->myContainer.end());
	std::cout << max_diff << std::endl;
}

//exception

const char	*Span::OutOfBoundException::what() const throw()
{
	return ("Exception: container is full");
}

const char	*Span::EmptyContainerException::what() const throw()
{
	return ("Exception: containter is empty");
}