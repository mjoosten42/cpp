#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal( std::string type ): _type(type) {
	std::cout << "AAnimal constructor called\n";
}

AAnimal::AAnimal( const AAnimal& rhs ) {
	std::cout << "AAnimal copy constructor called\n";
	*this = rhs;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called\n";
}

AAnimal&	AAnimal::operator=( const AAnimal& rhs ) {
	_type = rhs._type;
	return *this;
}

std::string	AAnimal::getType() const {
	return _type;
}

void	AAnimal::makeSound() const { 
	std::cout << "Generic Aanimal noises\n";
};
