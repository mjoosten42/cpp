#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form {
	public:
		PresidentialPardonForm( std::string target = "<target>" );
		PresidentialPardonForm( const PresidentialPardonForm& rhs );
		~PresidentialPardonForm();
		PresidentialPardonForm&	operator=( const PresidentialPardonForm& rhs );
	
		void	execute( const Bureaucrat& executor);
		
	private:
		std::string	_target;
};

#endif // PRESIDENTIALPARDONFORM_HPP
