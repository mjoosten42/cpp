#include "MateriaSource.hpp"
#include <iostream>

Leftover	MateriaSource::_leftover = Leftover();

MateriaSource::MateriaSource() {
	for (int i = 0; i < INVENTORY_MAX; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& rhs ) {
	for (int i = 0; i < INVENTORY_MAX; i++)
		_inventory[i] = NULL;
	*this = rhs;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < INVENTORY_MAX; i++)
		if (_inventory[i] != NULL)
			delete _inventory[i];
	_leftover.Clear();
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& rhs ) {
	if (this == &rhs)
		return *this;
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

void	MateriaSource::learnMateria( AMateria* materia ) {
	for (int i = 0; i < INVENTORY_MAX; i++ ) {
		if (_inventory[i] == NULL) {
			_inventory[i] = materia;
			return;
		}
	}
	_leftover.Add(materia);
}

AMateria*	MateriaSource::createMateria( const std::string& type) {
	for (int i = 0; i < INVENTORY_MAX; i++ )
		if (_inventory[i] != NULL)
			if (type.compare(_inventory[i]->getType()) == 0)
				return _inventory[i]->clone();
	return NULL;
}
