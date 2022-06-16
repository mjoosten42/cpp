#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria {
	public:
		AMateria( const std::string& type = "_type" );
		AMateria( const AMateria& rhs );
		virtual	~AMateria();
		AMateria&	operator=( const AMateria& rhs );

		const std::string&	getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void 		use(ICharacter& target);
	protected:
		std::string	_type;
};

#endif // AMATERIA_HPP
