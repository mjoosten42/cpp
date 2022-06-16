#include "Ice.hpp"
#include <iostream>

Ice::Ice(): AMateria("ice") {

}

Ice::Ice( const Ice& rhs ) {
	*this = rhs;
}

Ice::~Ice() {

}

Ice&	Ice::operator=( const Ice& rhs ) {
	AMateria::operator=(rhs);
	return *this;
}

Ice*	Ice::clone() const {
	return new Ice(*this);
}

void 	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
