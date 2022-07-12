#include <iostream>
#include <array>
#include <vector>
#include <iterator>
#include "easyFind.hpp"

int	main() {
	const std::array<int, 5>	const_array = { 10, 11, 12, 13, 15 };
	std::array<int, 5>			array = { 3, 5, 7, 11, 13 };
	std::vector<int>			vector;
	int							a;

	vector.push_back(0);
	vector.push_back(1);
	for (int i = 0; i < 10; i++)
		vector.push_back(vector[vector.size() - 1] + vector[vector.size() - 2]);
	
	std::cout << *std::find(array.begin(), array.end(), 3) << std::endl;
	if (std::find(array.begin(), array.end(), 8) != array.end())
		std::cout << *std::find(array.begin(), array.end(), 8) << std::endl;
	else
		std::cout << "Not in array\n";
	std::cout << *std::find(array.begin(), array.end(), 13) << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 100; i++) {
		a = *std::find(vector.begin(), vector.end(), i);
		if (std::find(vector.begin(), vector.end(), i) != vector.end())
			std::cout << a << std::endl;
	}
	std::cout << std::endl;
	std::cout << *std::find(const_array.begin(), const_array.end(), 10) << std::endl;
	if (std::find(const_array.begin(), const_array.end(), -42) != const_array.end())
		std::cout << *std::find(const_array.begin(), const_array.end(), 8) << std::endl;
	else
		std::cout << "Not in array\n";
	std::cout << *std::find(const_array.begin(), const_array.end(), 15) << std::endl;
}
