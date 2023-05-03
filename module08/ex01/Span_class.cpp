#include	"Span_class.hpp"


//coplien

Span::Span(void) : _N(10)
{}

Span::Span(unsigned int N) : _N(N), myContainer()
{}

Span::Span(const Span &rhs)
{
	*this = rhs;
}

Span	&Span::operator=(const Span &rhs)
{
	if (this != &rhs)
		this->_N = rhs._N;
	return (*this);
}

Span::~Span(void)
{}

// fonction membre

 int	Span::getMaxNum(void) const
{
	return (this->_N);
}

void	Span::addNumber(int num)
{
	if	(this->myContainer.size() < this->_N)
		this->myContainer.push_back(num);
	else
		throw Span::OutOfBoundException();
}

void	Span::shortestSpan(void)
{
	std::sort(this->myContainer.begin(), this->myContainer.end());
	std::vector<int>	diff;
	std::adjacent_difference(this->myContainer.begin(), this->myContainer.end(), std::back_inserter(diff));

	int min_diff;
    min_diff = *std::min_element(diff.begin() + 1, diff.end());
	std::cout << min_diff << std::endl;
}

void	Span::longestSpan(void)
{
	std::vector<int>	diff;
	int					max_diff;

	std::sort(this->myContainer.begin(), this->myContainer.end());
	std::adjacent_difference(this->myContainer.begin(), this->myContainer.end(), std::back_inserter(diff));
	max_diff = *std::max_element(diff.begin() + 1, diff.end());

	std::cout << max_diff << std::endl;

}

void	Span::fillContainer(unsigned int numIter)
{
	
}

//exception

const char	*Span::OutOfBoundException::what() const throw()
{
	return ("Exception: index out of bounds");
}
