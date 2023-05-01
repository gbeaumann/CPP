#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

# include	<algorithm>
# include	<vector>
# include	<iostream>

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
		void			addNumber(unsigned int num);
		unsigned int	getMaxNum(void) const;

		class	OutOfBoundException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif