#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int	main() {
	Bureaucrat	bob("Bob", 146);
	Bureaucrat	dick("Dick", 138);

	ShrubberyCreationForm	scForm("home");
	RobotomyRequestForm		rrForm("some middle manager");
	PresidentialPardonForm	ppForm("Trillian");

	std::cout << scForm << std::endl;
	std::cout << rrForm << std::endl;
	std::cout << ppForm << std::endl;
	std::cout << std::endl;

	bob.signForm(scForm);
	bob = Bureaucrat("Bob", 145);
	bob.signForm(scForm);
	dick.executeForm(scForm);
	dick = Bureaucrat("Dick", 137);
	dick.executeForm(scForm);

	std::cout << std::endl;

	bob = Bureaucrat("Bob", 73);
	dick = Bureaucrat("Dick", 46);

	bob.signForm(rrForm);
	bob = Bureaucrat("Bob", 72);
	bob.signForm(rrForm);
	dick.executeForm(rrForm);
	dick = Bureaucrat("Dick", 45);
	dick.executeForm(rrForm);

	std::cout << std::endl;

	bob = Bureaucrat("Bob", 26);
	dick = Bureaucrat("Dick", 6);

	bob.signForm(ppForm);
	bob = Bureaucrat("Bob", 25);
	bob.signForm(ppForm);
	dick.executeForm(ppForm);
	dick = Bureaucrat("Dick", 5);
	dick.executeForm(ppForm);

}
