#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include <iostream>

int	main() {
	Intern		dave;
	Form*		form;

	form = dave.makeForm("shrubbery creation", "backyard");
	std::cout << *form << std::endl;
	delete form;

	form = dave.makeForm("robotomy request", "Bender");
	std::cout << *form << std::endl;
	delete form;

	form = dave.makeForm("presidential pardon", "Marvin");
	std::cout << *form << std::endl;
	delete form;

	form = dave.makeForm("warrant", "Trillian");
}
