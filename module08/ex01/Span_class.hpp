#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

# include	<algorithm>
# include	<vector>
# include	<iostream>
# include	<numeric>

class	Span
{
	private:
		unsigned int	_N;
		std::vector<int>	myContainer;
	
	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span &rhs);
		Span	&operator=(const Span &rhs);
		~Span(void);

		void			addNumber(int num);
		void			addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int	getMaxNum(void) const;
		void			shortestSpan(void);
		void			longestSpan(void);

		class	OutOfBoundException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class	EmptyContainerException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

};

#endif