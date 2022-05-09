#include <iostream>
#include "PhoneBook.hpp"

int	main( void ) {
	PhoneBook	phone;
	std::string	input;

	while (1) {
		std::cout << GREEN "Enter ADD, SEARCH or EXIT: " DEFAULT;
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
			phone.Add();
		if (!input.compare("SEARCH"))
			phone.Search();
		if (!input.compare("EXIT") || std::cin.eof())
			return EXIT_SUCCESS;
	}
}
