#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria( const std::string& type ): _type(type) {

}

AMateria::AMateria( const AMateria& rhs ) {
	*this = rhs;
}

AMateria::~AMateria() {

}

AMateria&	AMateria::operator=( const AMateria& rhs ) {
	(void)rhs;
	return *this;
}

const std::string&	AMateria::getType() const {
	return _type;
}

void	AMateria::use( ICharacter& target ) {
	std::cout << "* " << target.getName() << " uses a Materia *\n";
}
