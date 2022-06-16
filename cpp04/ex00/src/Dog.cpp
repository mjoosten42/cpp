#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal() {
	std::cout << "Dog constructor called\n";
	_type = "Dog";
}

Dog::Dog( const Dog& rhs ) {
	std::cout << "Dog copy constructor called\n";
	*this = rhs;
}

Dog::~Dog() {
	std::cout << "Dog destructor called\n";
}

Dog&	Dog::operator=( const Dog& rhs ) {
	Animal::operator=(rhs);
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "Bark!\n";
}
