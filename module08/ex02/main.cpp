#include	"mutantStack_class.hpp"
#include	"mutantStack_class.tpp"
#include	<list>

int main()
{
	std::cout << " --- Subject main --- " << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Stack size :" << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "Stack content : " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << " --- Subject main with std::list --- " << std::endl;
	std::list<int>	myList;
	myList.push_back(5);
	myList.push_back(17);
	std::cout << "Top : " << myList.back() << std::endl;
	myList.pop_back();
	std::cout << "Stack size :" << myList.size() << std::endl;
	myList.push_back(3);
	myList.push_back(5);
	myList.push_back(737);
	//[...]
	myList.push_back(0);
	std::list<int>::iterator itl = myList.begin();
	std::list<int>::iterator itel = myList.end();
	++itl;
	--itl;
	while (itl != itel)
	{
		std::cout << "Stack content : " << *itl << std::endl;
		++itl;
	}

	std::cout << " --- Normal stack --- " << std::endl;
	MutantStack<std::string> nStack;
	nStack.push("lapin!");
	nStack.push("les");
	nStack.push("Salut");
	for (;!nStack.empty();) //same as while(!nStack.empty())
	{
		std::cout << nStack.top() << std::endl;
		nStack.pop();
	}


	std::cout << " --- Stack with iterator --- " << std::endl;
	MutantStack<std::string>	itStack;
	if (itStack.empty() == true)
		std::cout << "The stack is empty" << std::endl;
	itStack.push("Salut");
	itStack.push("les");
	itStack.push("Pipapilupus");

	MutantStack<std::string>::iterator	endit = itStack.end();

	for (MutantStack<std::string>::iterator	begit = itStack.begin(); begit < endit; begit++)
		std::cout << *begit << std::endl;
	
	return 0;
}