#include	"mutantStack_class.hpp"
#include	"mutantStack_class.tpp"

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

	std::cout << " --- Normal stack --- " << std::endl;
	MutantStack<std::string> nStack;
	nStack.push("lapin!");
	nStack.push("les");
	nStack.push("Salut");
	for (int i = 0; i < 3; i++)
	{
		std::cout << nStack.top() << std::endl;
		nStack.pop();
	}


	std::cout << " --- Stack with iterator --- " << std::endl;
	MutantStack<std::string>	itStack;
	itStack.push("Salut");
	itStack.push("les");
	itStack.push("Pipapulupus");

	MutantStack<std::string>::iterator	endit = itStack.end();

	for (MutantStack<std::string>::iterator	begit = itStack.begin(); begit < endit; begit++)
		std::cout << *begit << std::endl;
	
	return 0;
}