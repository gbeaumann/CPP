#ifndef	RPN_HPP
# define RPN_HPP

# include	<stack>
# include	<iostream>
# include	<cstdlib>

class	RPN
{
	private:
		std::stack<int>	_myStack;
		std::string		_operator;

	public:
		RPN(void);
		RPN(const RPN &rhs);
		RPN	&operator=(const RPN &rhs);
		~RPN(void);

		void	calculator(const std::string	toCalculate);
		void	operation(void);

		bool	checkOperator(std::string input);
		void	checkInput(std::string toVerify);

		std::string	getOperator(void);
		

		class	WrongInputException	: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class	DivisionByZeroException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		// ------- test -------
		void	printResult(void);
};

#endif
