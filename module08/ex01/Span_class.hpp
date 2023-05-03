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
	
	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span &rhs);
		Span	&operator=(const Span &rhs);
		~Span(void);

		std::vector<unsigned int>	myContainer; // a mettre en private
		void	addNumber(int num);
		int		getMaxNum(void) const;
		void	shortestSpan(void);
		void	longestSpan(void);
		void	fillContainer(unsigned int numIter);

		class	OutOfBoundException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class	
};

#endif