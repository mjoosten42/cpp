#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>

class Form;

class Intern {
	public:
		Intern();
		Intern( const Intern& rhs );
		~Intern();
		Intern&	operator=( const Intern& rhs );

		Form*	makeForm( std::string name, std::string target );
		
	private:
};

#endif // INTERN_HPP

