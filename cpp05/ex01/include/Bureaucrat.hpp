#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat {
	public:
		Bureaucrat( const std::string& name = "_name", int grade = 150 );
		Bureaucrat( const Bureaucrat& rhs );
		~Bureaucrat();
		Bureaucrat&	operator=( const Bureaucrat& rhs );

		const std::string&	getName() const ;
		int					getGrade() const ;
	
		void	promote();
		void	demote();

		void	signForm( Form& form );
	
		class	GradeTooHighException: public std::exception {
			const char *what() const throw() {
				return "Grade too high";
			}
		};

		class	GradeTooLowException: public std::exception {
			const char *what() const throw() {
				return "Grade too low";
			}
		};
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream&	operator<<( std::ostream& os, const Bureaucrat& rhs );

#endif // BUREAUCRAT_HPP
