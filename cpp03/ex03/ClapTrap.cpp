#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap( std::string name) {
	std::cout << "ClapTrap constructor called\n";
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap& rhs ) {
	*this = rhs;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called\n";
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& rhs ) {
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return *this;
}

void	ClapTrap::attack( const std::string& target ) {
	if (!isActive())
		return ;
	_energyPoints--;
	std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << _attackDamage << " points of damage!\n";
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (!isActive())
		return ;
	_hitPoints -= amount;
	std::cout << getName() << " takes " << amount << " damage!\n";
	if (_hitPoints < 0) {
		_hitPoints = 0;
		std::cout << getName() << " has died!\n";
	}
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (!isActive())
		return ;
	_energyPoints--;
	_hitPoints += amount;
	std::cout << getName() << " repairs itself for " << amount << " hitpoints!\n";
}

bool	ClapTrap::isActive() {
	if (_hitPoints == 0) {
		std::cout << getName() << " is out of hitpoints!\n";
		return false;
	}
	if (_energyPoints == 0) {
		std::cout << getName() << " is out of energy!\n";
		return false;
	}
	return true;
}

std::string	ClapTrap::getName() {
	return _name;
}