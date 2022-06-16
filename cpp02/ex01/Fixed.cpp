#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fract = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called\n";
	_rawBits = 0;
}

Fixed::Fixed( const Fixed& rhs ) {
	std::cout << "Copy constructor called\n";
	*this = rhs;
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed&	Fixed::operator=( const Fixed& rhs) {
	std::cout << "Copy assignment operator called\n";
	_rawBits = rhs.getRawBits();
	return *this;
}

void	Fixed::setRawBits( const int rawBits ) {
	_rawBits = rawBits;
}

int 	Fixed::getRawBits() const {
	return _rawBits;
}

Fixed::Fixed( const int number ) {
	std::cout << "Int constructor called\n";
	_rawBits = number << _fract;
}

Fixed::Fixed( const float number ) {
	std::cout << "Float constructor called\n";
	_rawBits = roundf(number * (float)(1 << _fract));
}

int		Fixed::toInt() const {
	return (_rawBits >> _fract);
}

float	Fixed::toFloat() const {
	return ((float)_rawBits / (1 << _fract));
}

std::ostream&	operator<<( std::ostream& ostream, const Fixed& rhs ) {
	return ostream << rhs.toFloat();
}
