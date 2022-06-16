#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
	std::cout << "Animal constructor called\n";
}

Animal::Animal( const Animal& rhs ) {
	std::cout << "Animal copy constructor called\n";
	*this = rhs;
}

Animal::~Animal() {
	std::cout << "Animal destructor called\n";
}

Animal&	Animal::operator=( const Animal& rhs ) {
	_type = rhs._type;
	return *this;
}

std::string	Animal::getType() const {
	return _type;
}

void	Animal::makeSound() const { 
	std::cout << "Generic animal noises\n";
};
