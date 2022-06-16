#include "Bureaucrat.hpp"
#include <iostream>

int	main() {
	Bureaucrat	bob("Bob", 1);

	std::cout << bob << std::endl;

	try {
		bob.promote();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	bob = Bureaucrat("Still Bob", 150);

	try {
		bob.demote();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		bob = Bureaucrat("Also Bob", 0);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		bob = Bureaucrat("Another Bob", 151);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		bob = Bureaucrat("Dick", -1);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}