#ifndef LEFTOVER_HPP
#define LEFTOVER_HPP

#include <string>
#include "AMateria.hpp"

class Leftover {
	public:
		Leftover( AMateria* ptr = NULL );
		Leftover( const Leftover& rhs );
		~Leftover();
		Leftover&	operator=( const Leftover& rhs );

		void	Add( AMateria* ptr );
		void	Clear();
	private:
		AMateria*	_materia;
		Leftover*	_next;
};

#endif // LEFTOVER_HPP
