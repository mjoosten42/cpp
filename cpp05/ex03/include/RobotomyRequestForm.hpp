#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form {
	public:
		RobotomyRequestForm( std::string target = "<target>" );
		RobotomyRequestForm( const RobotomyRequestForm& rhs );
		~RobotomyRequestForm();
		RobotomyRequestForm&	operator=( const RobotomyRequestForm& rhs );
	
		void	execute( const Bureaucrat& executor);
		
	private:
		std::string	_target;
};

#endif // ROBOTOMYREQUESTFORM_HPP
