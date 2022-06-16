#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( std::string name, int signGrade, int executeGrade )
	: _name(name), _signGrade(signGrade), _executeGrade(executeGrade) {
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
	_signed = false;
}

Form::Form( const Form& rhs )
	: _name(rhs._name), _signGrade(rhs._signGrade), _executeGrade(rhs._executeGrade) {
	*this = rhs;
}

Form::~Form() {

}

Form&	Form::operator=( const Form& rhs ) {
	_signed = rhs._signed;
	return *this;
}

const std::string&	Form::getName() const {
	return _name;
}

bool	Form::getSigned() const {
	return _signed;
}

int		Form::getSignGrade() const {
	return _signGrade;
}

int		Form::getExecuteGrade() const {
	return _executeGrade;
}

std::ostream&	operator<<( std::ostream& os, const Form& rhs ) {
	return os << std::boolalpha << "[ " << rhs.getName() << ", " << rhs.getSigned() << ", " << rhs.getSignGrade() << ", " << rhs.getExecuteGrade() << " ]";
}

void	Form::beSigned( const Bureaucrat& rhs ) {
	if (_signed == true)
		throw Form::AlreadySignedException();
	if (rhs.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	_signed = true;
}

void	Form::isExecutable( const Bureaucrat& executor ) {
	if (_signed == false)
		throw Form::NotSignedException();	
	if (executor.getGrade() > getExecuteGrade())
		throw Form::GradeTooLowException();
}