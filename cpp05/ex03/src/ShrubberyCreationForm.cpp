#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ): Form("Shrubbery Creation", 145, 137)  {
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& rhs ) {
	*this = rhs;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& rhs ) {
	_target = rhs._target;
	Form::operator=(rhs);
	return *this;
}

void	ShrubberyCreationForm::execute( const Bureaucrat& executor) {
	std::ofstream	outfile;

	isExecutable(executor);
	outfile.open(_target + "_shrubbery", std::ios::trunc);
	if (!outfile.is_open())
		throw FilePermissionDeniedException();
	outfile << "      /\\      \n     /\\*\\     \n    /\\O\\*\\    \n   /*/\\/\\/\\   \n  /\\O\\/\\*\\/\\  \n /\\*\\/\\*\\/\\/\\ \n/\\O\\/\\/*/\\/O/\\\n      ||      \n      ||      \n      ||    ";
}
