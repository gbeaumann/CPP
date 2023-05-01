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

unsigned int	Span::getMaxNum(void) const
{
	return (this->_N);
}

void	Span::addNumber(unsigned int num)
{
	if	(this->myContainer.size() < this->_N)
		this->myContainer.push_back(num);
	else
		throw Span::OutOfBoundException();
}

//exception

const char	*Span::OutOfBoundException::what() const throw()
{
	return ("Exception: index out of bounds");
}
