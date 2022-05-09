#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#define CONTACTS_MAX 8

class PhoneBook {
	public:
		PhoneBook() : added(0) { };
		void	Add( void );
		void	Search( void );
		void	Exit( void );

	private:
		Contact	list[CONTACTS_MAX];
		int		added;
};

#endif
