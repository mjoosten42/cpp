#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB( std::string name ) : _name(name) { };

		void	setWeapon( Weapon& weapon );
		void	attack( void );

	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif