#include "Fixed.hpp"
#include <iostream>

const int Fixed::_fract = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	_rawBits = 0;
}

Fixed::Fixed( const Fixed& point ) {
	std::cout << "Copy constructor called\n";
	*this = point;
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=( const Fixed& rhs) {
	std::cout << "Copy assignment operator called\n";
	_rawBits = rhs.getRawBits();
	return *this;
}

void	Fixed::setRawBits( const int rawBits ) {
	std::cout << "setRawBits member function called\n";
	_rawBits = rawBits;
}

int 	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return _rawBits;
}