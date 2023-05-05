#ifndef MUTANTSTACK_CLASS_HPP
# define MUTANTSTACK_CLASS_HPP

#include	<stack>
#include	<iostream>

template	<typename T>
class	MutantStack : public std::stack<T>
{
	private:
		//std::stack<T>	_myContainer;

	public:
		MutantStack(void);
		MutantStack(const MutantStack &rhs);
		MutantStack	&operator=(const MutantStack &rhs);
		~MutantStack(void);

		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin(void);
		/*{
			return (this->c.begin());
		}*/
		iterator	end(void);
		/*{
			return (this->c.end());
		}*/
		
};

#endif
