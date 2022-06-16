#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form {
	public:
		ShrubberyCreationForm( std::string target = "<target>" );
		ShrubberyCreationForm( const ShrubberyCreationForm& rhs );
		~ShrubberyCreationForm();
		ShrubberyCreationForm&	operator=( const ShrubberyCreationForm& rhs );
	
		void	execute( const Bureaucrat& executor);
		
		class	FilePermissionDeniedException: public std::exception {
			const char *what() const throw() {
				return "permission denied";
			}
		};
	private:
		std::string	_target;
};

#endif // SHRUBBERYCREATIONFORM_HPP
