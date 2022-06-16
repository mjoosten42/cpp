#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form {
	public:
		Form( std::string name = "_name", int signGrade = 150, int executeGrade = 150 );
		Form( const Form& rhs );
		virtual	~Form();
		Form&	operator=( const Form& rhs );
		
		const std::string&	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecuteGrade() const;

		void	beSigned( const Bureaucrat& rhs );

		virtual void	execute( const Bureaucrat& executor ) = 0;
		void			isExecutable( const Bureaucrat& executor );
	
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
	
		class	AlreadySignedException: public std::exception {
			const char *what() const throw() {
				return "Form already signed";
			}
		};

		class	NotSignedException: public std::exception {
			const char *what() const throw() {
				return "Form not signed";
			}
		};
	
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_executeGrade;

};

std::ostream&	operator<<( std::ostream& os, const Form& rhs );

#endif // FORM_HPP
