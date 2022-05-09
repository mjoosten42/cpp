#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
	public:
		Weapon( std::string type );

		const std::string&	getType( void );
		void				setType( std::string newType );

	private:
		std::string	_type;
};

#endif