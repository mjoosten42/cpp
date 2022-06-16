#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main() {
	std::cout << std::boolalpha;
	try {
		std::cout << Form("Form a", 1, 150) << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << Form("Form b", 0, 150) << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << Form("Form c", 1, 151) << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << Form("Form d", 0, 151) << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	Bureaucrat	bob("Bob", 42);
	Form 		form1("Leave", 42);

	bob.signForm(form1);
	bob.signForm(form1);

	Form		form2("New chairs", 41);
	bob.signForm(form2);
}