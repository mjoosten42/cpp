#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() { };

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap constructor called\n";
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
}

DiamondTrap::DiamondTrap( const DiamondTrap& rhs ) {
	*this = rhs;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called\n";
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& rhs ) {
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return *this;
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name: " << _name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}

std::string	DiamondTrap::getName() {
	return _name;
}
