#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
	std::cout << "Cat constructor called\n";
	_type = "Cat";
}

Cat::Cat( const Cat& rhs ) {
	std::cout << "Cat copy constructor called\n";
	*this = rhs;
}

Cat::~Cat() {
	std::cout << "Cat destructor called\n";
}

Cat&	Cat::operator=( const Cat& rhs ) {
	Animal::operator=(rhs);
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Meow!\n";
}
