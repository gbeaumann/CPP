#include	"RPN.hpp"


// ------- coplien -------

RPN::RPN(void) {}

RPN::RPN(const RPN &rhs)
{
	*this = rhs;
}

RPN	&RPN::operator=(const RPN &rhs)
{
	if (this != &rhs)
		this->_myStack = rhs._myStack;
	return (*this);
}

RPN::~RPN(void) {}

// ------- member fonction -------

void	RPN::calculator(const std::string toCalculate)
{
	size_t		nbr = 0;
	size_t		nbrOpe = 0;
	size_t		pos;
	std::string	charStock;
	std::string	stock = toCalculate;

	try 
	{
		for (size_t i = 0; i < toCalculate.size(); i++)
		{
			if ((pos = stock.find(" ")) != std::string::npos)
			{
				if (stock.size() != 1)
				{
					charStock = stock.substr(0, pos);
					stock.erase(0, pos + 1);
					if (!this->checkOperator(charStock))
					{
						this->checkInput(charStock);
						nbr++;
					}
					else
					{
						this->operation();
						nbrOpe++;	
					}
				}
			}
			else if (stock.size() == 1)
			{
				if (this->checkOperator(stock))
				{
					nbrOpe++;	
					if (nbrOpe >= nbr)
						throw	RPN::WrongInputException();
					this->operation();
				}
				else
					this->checkInput(stock);
				stock.erase(0, 1);
			}
		}
		if (nbrOpe == 0 || nbr == 0 || this->_myStack.size() > 1)
			throw RPN::WrongInputException();
		this->printResult();
	}
	catch	(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	RPN::operation(void)
{
	if (this->_myStack.size() < 2)
		throw RPN::WrongInputException();
	int	result;
	int	stockB  = this->_myStack.top();
	this->_myStack.pop();
	int	stockA = this->_myStack.top();
	this->_myStack.pop();

	if (this->getOperator() == "+")
		result = stockA + stockB;
	else if (this->getOperator() == "-")
		result = stockA - stockB;
	else if (this->getOperator() == "*")
		result = stockA * stockB;
	else if (this->getOperator() == "/")
	{
		if (stockB == 0)
			throw	RPN::DivisionByZeroException();
		result = stockA / stockB;
	}
	this->_myStack.push(result);
}

// ------- Checker -------

bool	RPN::checkOperator(std::string input)
{
	if (input == "+" || input == "-" || input == "*" || input == "/")
	{
		this->_operator = input;
		return (1);
	}
	else
		return (0);
}

void	RPN::checkInput(std::string toVerify)
{
	int	check;

	if ((check = std::atoi(toVerify.c_str())) == 0 && toVerify != "0")
		throw RPN::WrongInputException();
	else
	{
		if (check > 9 || check < 0)
			throw RPN::WrongInputException();
		else
			this->_myStack.push(check);
	}
}

// ------- Getter --------

std::string	RPN::getOperator(void)
{
	return (this->_operator);
}

// ------- Exception -------

const char	*RPN::WrongInputException::what() const throw()
{
	return ("Exception: Wrong input");
}

const char	*RPN::DivisionByZeroException::what() const throw()
{
	return ("Exception: division by zero");
}

// ------- Test -------


void	RPN::printResult(void)
{
	for (; !this->_myStack.empty();)
	{
		std::cout << this->_myStack.top() << std::endl;
		this->_myStack.pop();
	}
}