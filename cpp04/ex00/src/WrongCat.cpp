#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat constructor called\n";
	_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat& rhs ) {
	std::cout << "WrongCat copy constructor called\n";
	*this = rhs;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called\n";
}

WrongCat&	WrongCat::operator=( const WrongCat& rhs ) {
	WrongAnimal::operator=(rhs);
	return *this;
}

void	WrongCat::makeSound() const {
	std::cout << "Rawr!\n";
}
