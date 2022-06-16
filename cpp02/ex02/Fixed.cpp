#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fract = 8;

Fixed::Fixed( const Fixed& rhs ) {
	*this = rhs;
}

Fixed&	Fixed::operator=( const Fixed& rhs) {
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
	_rawBits = number << _fract;
}

Fixed::Fixed( const float number ) {
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

bool	Fixed::operator>( const Fixed& rhs) const {
	return _rawBits > rhs._rawBits;
}

bool	Fixed::operator<( const Fixed& rhs) const {
	return _rawBits < rhs._rawBits;
}

bool	Fixed::operator>=( const Fixed& rhs) const {
	return _rawBits >= rhs._rawBits;
}

bool	Fixed::operator<=( const Fixed& rhs) const {
	return _rawBits <= rhs._rawBits;
}

bool	Fixed::operator==( const Fixed& rhs) const {
	return _rawBits == rhs._rawBits;
}

bool	Fixed::operator!=( const Fixed& rhs) const {
	return _rawBits != rhs._rawBits;
}

Fixed	Fixed::operator+( const Fixed& rhs ) const {
	return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-( const Fixed& rhs ) const {
	return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*( const Fixed& rhs ) const {
	return (Fixed(toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/( const Fixed& rhs ) const {
	return (Fixed(toFloat() / rhs.toFloat()));
}

Fixed&	Fixed::operator++() {
	_rawBits++;
	return *this;
}

Fixed	Fixed::operator++( int ) {
	Fixed tmp = *this;
	_rawBits++;
	return tmp;
}

Fixed&	Fixed::operator--() {
	_rawBits--;
	return *this;
}

Fixed	Fixed::operator--( int ) {
	Fixed tmp = *this;
	_rawBits--;
	return tmp;
}

Fixed&	Fixed::min( Fixed& lhs, Fixed& rhs ) {
	return (lhs < rhs ? lhs : rhs);
}

const Fixed&	Fixed::min( const Fixed& lhs, const Fixed& rhs ) {
	return (lhs < rhs ? lhs : rhs);
}

Fixed&	Fixed::max( Fixed& lhs, Fixed& rhs ) {
	return (lhs > rhs ? lhs : rhs);
}

const Fixed&	Fixed::max( const Fixed& lhs, const Fixed& rhs ) {
	return (lhs > rhs ? lhs : rhs);
}
