#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ): Form("Presidential pardon", 25, 5) {
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& rhs ) {
	*this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm& rhs ) {
	_target = rhs._target;
	Form::operator=(rhs);
	return *this;
}

void	PresidentialPardonForm::execute( const Bureaucrat& executor) {
	isExecutable(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
}
