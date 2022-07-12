#include <iostream>
#include "Span.hpp"
#include <ctime>
#include <vector>
#include <algorithm>

int	main() {
	Span	sp = Span(5);

	std::cout << "--- Adding numbers ---\n";
	sp.addNumber(6);

	try { std::cout << sp.shortestSpan() << std::endl; }
		catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
	
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	try { sp.addNumber(42);	}
		catch(const std::exception& e) { std::cerr << e.what() << '\n';	}
	
	std::cout << "--- Printing spans ---\n";
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "--- Copying span ---\n";
	Span	copy = sp;

	try { std::cout << copy.shortestSpan() << std::endl; }
		catch(const std::exception& e) { std::cerr << e.what() << '\n';	}

	std::cout << "--- Printing random spans of big container ---\n";
	srand(time(NULL));
	Span	big = Span(1<<8);
	for (int i = 0; i < 1<<8; i++)
		big.addNumber(rand());
	std::cout << big.shortestSpan() << std::endl;
	std::cout << big.longestSpan() << std::endl;

	std::cout << "--- Adding range of numbers ---\n";
	std::vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i * i);
	std::random_shuffle(v.begin(), v.end());
	for (int i = 0; i < 10; i++)
		std::cout << v[i] << ", ";
	sp = Span(10);
	sp.addNumbers(v.begin(), v.end());
	std::cout << std::endl;

	std::cout << sp.shortestSpan() << std::endl;	
	std::cout << sp.longestSpan() << std::endl;	
}
