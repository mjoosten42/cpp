#ifndef	CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& rhs );
		~ClapTrap();
		ClapTrap&	operator=( const ClapTrap& rhs );

		void	attack( const std::string& target );
		void 	takeDamage( unsigned int amount );
		void 	beRepaired( unsigned int amount );

	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

		bool	isActive();
};

#endif