#include <iostream>
#include "iter.hpp"

template <typename T>
void	print(const T& param) {
	std::cout << param << " ";
}

void	square(int& param) {
	param = param * param;
}

int	main(void) {
	const char	const_char_array[] = { 'a', 'b', 'c', 'd', 'e' };
	int			int_array[] = { 0, 1, 2, 3, 4 };

	iter(int_array, 5, print);
	std::cout << std::endl;

	iter(int_array, 4, square);
	iter(int_array, 5, print);
	std::cout << std::endl;

	iter(const_char_array, 3, print);
	std::cout << std::endl;
}
