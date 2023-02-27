#include <iostream>
#include <list>

#include "MutantStack.hpp"

int	main(void) {
	std::cout << "---TEST 1---" <<std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

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
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std::cout << "---TEST 2---" <<std::endl;

	std::list<int> mlist;

	mlist.push_back(10);
	mlist.push_back(20);

	std::cout << mlist.front() << std::endl;

	mlist.pop_back();

	std::cout << mlist.size() << std::endl;

	mlist.push_back(100);
	mlist.push_back(200);
	mlist.push_back(300);
	//[...]
	mlist.push_back(0);

	std::list<int>::iterator it2 = mlist.begin();
	std::list<int>::iterator ite2 = mlist.end();

	++it2;
	--it2;
	while (it2 != ite2)
	{
	std::cout << *it2 << std::endl;
	++it2;
	}

	return (0);
}
