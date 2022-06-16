#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap() { };

FragTrap::FragTrap( std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called\n";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap& rhs ) {
	*this = rhs;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called\n";
}

FragTrap&	FragTrap::operator=( const FragTrap& rhs ) {
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return *this;
}

void	FragTrap::highFivesGuys() {
	std::cout << "Fragtrap " << _name << " wants a high five!\n";
}
