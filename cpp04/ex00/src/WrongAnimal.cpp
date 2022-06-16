#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal( const WrongAnimal& rhs ) {
	std::cout << "WrongAnimal copy constructor called\n";
	*this = rhs;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& rhs ) {
	_type = rhs._type;
	return *this;
}

std::string	WrongAnimal::getType() const {
	return _type;
}

void	WrongAnimal::makeSound() const {
	std::cout << "* car noises *\n";
}
