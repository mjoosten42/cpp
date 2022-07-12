#include <iostream>
#include "Array.hpp"

int	main( void ) {
	Array<int>	array(3);

	array[2] = 42;
	std::cout << array[2] << std::endl;
	try	{
		std::cout << array[3] << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try	{
		std::cout << array[-1] << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	Array<int>	copy = array;

	std::cout << copy[2] << std::endl;
	copy[0] = -42;
	std::cout << copy[0] << std::endl;
}
