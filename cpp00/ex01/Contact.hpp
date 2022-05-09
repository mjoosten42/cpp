#ifndef CONTACT_HPP
#define CONTACT_HPP

#define RED "\033[1;31m"
#define BLUE "\033[1;36m"
#define GREEN "\033[1;32m"
#define DEFAULT "\033[1;0m"

#include <string>

class Contact {
	public:
		void	New( void );
		void	Display( void );
		void	DisplayFull( void );
	
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkest_secret;
};

#endif