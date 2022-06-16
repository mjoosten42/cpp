#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Leftover.hpp"

#define INVENTORY_MAX 4

class MateriaSource: public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource( const MateriaSource& rhs );
		~MateriaSource();
		MateriaSource&	operator=( const MateriaSource& rhs );
	
		void		learnMateria( AMateria* );
		AMateria*	createMateria( const std::string& type );
	private:
		AMateria*	_inventory[INVENTORY_MAX];
		
		static Leftover	_leftover;
};

#endif // MATERIASOURCE_HPP
