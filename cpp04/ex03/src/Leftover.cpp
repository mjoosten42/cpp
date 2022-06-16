#include "Leftover.hpp"

Leftover::Leftover( AMateria* ptr ) {
	_materia = ptr;
	_next = NULL;
}

Leftover::Leftover( const Leftover& rhs ) {
	*this = rhs;
}

Leftover::~Leftover() {

}

Leftover&	Leftover::operator=( const Leftover& rhs ) {
	(void)rhs;
	return *this;
}

void	Leftover::Add( AMateria* ptr ) {
	Leftover*	cur = this;

	while (cur->_next)
		cur = cur->_next;
	cur->_next = new Leftover(ptr);
}

void	Leftover::Clear() {
	Leftover*	cur = this;
	Leftover*	next = cur->_next;

	while (cur->_next) {
		next = cur->_next->_next;
		delete cur->_next;
		cur->_next = next;
	}
}