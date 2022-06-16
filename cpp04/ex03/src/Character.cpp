#include "Character.hpp"
#include <iostream>

Leftover	Character::_leftover = Leftover();

Character::Character( const std::string& name ) {
	_name = name;
	for (int i = 0; i < INVENTORY_MAX; i++ )
		_inventory[i] = NULL;
}

Character::Character( const Character& rhs ) {
	for (int i = 0; i < INVENTORY_MAX; i++ )
		_inventory[i] = NULL;
	*this = rhs;
}

Character&	Character::operator=( const Character& rhs ) {
	if (this == &rhs)
		return *this;
	_name = rhs._name;
	for (int i = 0; i < INVENTORY_MAX; i++ ) {
		if (_inventory[i] != NULL) {
			delete _inventory[i];
			_inventory[i] = NULL;
		}
		if (rhs._inventory[i] != NULL)
			_inventory[i] = rhs._inventory[i]->clone();
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i < INVENTORY_MAX; i++ )
		if (_inventory[i] != NULL)
			delete _inventory[i];
	_leftover.Clear();
}

const std::string& Character::getName() const {
	return _name;
}

void	Character::equip( AMateria* materia ) {
	for (int i = 0; i < INVENTORY_MAX; i++ ) {
		if (_inventory[i] == NULL) {
			_inventory[i] = materia;
			return;
		}
	}
	_leftover.Add(materia);
}

void	Character::unequip(int idx) {
	if (_inventory[idx]) {
		_leftover.Add(_inventory[idx]);
		_inventory[idx] = NULL;
	}
}

void	Character::use( int idx, ICharacter& target ) {
	if (idx >= 0 && idx < INVENTORY_MAX)
		if (_inventory[idx] != NULL)
			_inventory[idx]->use(target);
}
