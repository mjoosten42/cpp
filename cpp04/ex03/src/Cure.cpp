#include "Cure.hpp"
#include <iostream>

Cure::Cure(): AMateria("cure") { 

}

Cure::Cure( const Cure& rhs ) {
	*this = rhs;
}

Cure::~Cure() {

}

Cure&	Cure::operator=( const Cure& rhs ) {
	AMateria::operator=(rhs);
	return *this;
}

Cure*	Cure::clone() const {
	return new Cure(*this);
}

void 	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
