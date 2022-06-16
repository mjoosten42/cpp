#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm( std::string target ): Form("Robotomy request", 72, 45) {
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& rhs ) {
	*this = rhs;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& rhs ) {
	_target = rhs._target;
	Form::operator=(rhs);
	return *this;
}

void	RobotomyRequestForm::execute( const Bureaucrat& executor) {
	isExecutable(executor);
	std::cout << " * drilling noises *\n";
	std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << _target << " has been succesfully robotomized.\n";
	else
		std::cout << _target << " robotomy failed\n";
}
