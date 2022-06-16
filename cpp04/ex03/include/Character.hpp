#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Leftover.hpp"

#define INVENTORY_MAX 4

class Character: public ICharacter {
	public:
		Character( const std::string& name = "_name" );
		Character( const Character& rhs );
		~Character();
		Character&	operator=( const Character& rhs );
	
		const std::string&	getName() const;
		void 				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);
	protected:
		std::string	_name;
		AMateria*	_inventory[INVENTORY_MAX];
	
		static Leftover	_leftover;
};

#endif // CHARACTER_HPP
