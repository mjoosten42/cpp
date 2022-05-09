#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon) { };

		void	attack( void );

	private:
		std::string	_name;
		Weapon&		_weapon;
};

#endif