#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

typedef enum	Forms { SHRUBBERY, ROBOTOMY, PARDON, NONE } e_formType;

Intern::Intern() {

}

Intern::Intern( const Intern& rhs ) {
	*this = rhs;
}

Intern::~Intern() {

}

Intern&	Intern::operator=( const Intern& rhs ) {
	(void)rhs;
	return *this;
}

Form*	Intern::makeForm( std::string name, std::string target ) {
	std::string	formNames[] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	e_formType	formType = NONE;

	for (int i = 0; i < 3; i++)
		if (name.compare(formNames[i]) == 0)
			formType = (e_formType)i;
	switch (formType)	{
		case SHRUBBERY:
			std::cout << "Intern creates " << name << std::endl;
			return new ShrubberyCreationForm(target);
		case ROBOTOMY:
			std::cout << "Intern creates " << name << std::endl;
			return new RobotomyRequestForm(target);
		case PARDON:
			std::cout << "Intern creates " << name << std::endl;
			return new PresidentialPardonForm(target);
		default:
			std::cerr << name << ": no such form\n";
			return NULL;
	}
}
