#include "Bureaucrat.hpp"

void	checkGrade( int grade );

Bureaucrat::Bureaucrat( const std::string& name, int grade ) : _name(name) {
	checkGrade(grade);
	_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat& rhs ) : _name(rhs._name) {
	*this = rhs;
}

Bureaucrat::~Bureaucrat() {
	
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& rhs ) {
	_grade = rhs._grade;
	return *this;
}

std::ostream&	operator<<( std::ostream& os, const Bureaucrat& rhs ) {
	return os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
}

const std::string&	Bureaucrat::getName() const {
	return _name;
}

int	Bureaucrat::getGrade() const {
	return _grade;
}

void	Bureaucrat::promote() {
	checkGrade(_grade - 1);
	_grade--;
}

void	Bureaucrat::demote() {
	checkGrade(_grade + 1);
	_grade++;
}

void	checkGrade( int grade ) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}
