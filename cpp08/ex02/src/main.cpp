#include <iostream>
#include "MutantStack.hpp"
#include <list>

int main() {
	const int	array[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
	const int	size = sizeof(array) / sizeof(*array);

	{
	std::cout << "--- MutantStack ---\n";
	MutantStack<int> mstack;

	for (int i = 0; i < size; i++)
		mstack.push(array[i]);
	
	std::cout << "Size: " << mstack.size() << std::endl;
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.push(42);
	mstack.pop();

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << ", ";
		++it; 
	}
	std::cout << std::endl;

	MutantStack<int>	copy(mstack);
	std::cout << "Copy top: " << copy.top() << std::endl;

	std::stack<int> s(mstack);
	std::cout << "std::stack top: " << s.top() << std::endl;

	}
	{
	std::cout << "--- std::list ---\n";
	std::list<int>	list;

	for (int i = 0; i < size; i++)
		list.push_back(array[i]);
	
	std::cout << "Size: " << list.size() << std::endl;
	std::cout << "Top: " << *--list.end() << std::endl;
	list.push_back(42);
	list.pop_back();

	std::list<int>::iterator it = list.begin();
	++it;
	--it;
	while (it != list.end()) {
		std::cout << *it << ", ";
		++it; 
	}
	std::cout << std::endl;
	}
}
