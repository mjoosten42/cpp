#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap( std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called\n";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& rhs ) {
	*this = rhs;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called\n";
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& rhs ) {
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return *this;
}

void	ScavTrap::attack( const std::string& target ) {
	if (!isActive())
		return ;
	_energyPoints--;
	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << _attackDamage << " points of damage!\n";
}

void	ScavTrap::guardGate() {
	std::cout << "Scavtrap " << getName() << " entered gatekeeper mode!\n";
}
