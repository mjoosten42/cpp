#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		static const int	_fract;

		int	_rawBits;
	public:
		Fixed() : _rawBits( 0 ) { };
		Fixed( const int number );
		Fixed( const float number );
		Fixed( const Fixed& rhs );
		~Fixed() { };

		int		toInt() const ;
		float	toFloat() const ;
	
		Fixed&	operator=( const Fixed& rhs);

		bool	operator>( const Fixed& rhs ) const;
		bool	operator<( const Fixed& rhs ) const;
		bool	operator>=( const Fixed& rhs ) const;
		bool	operator<=( const Fixed& rhs ) const;
		bool	operator==( const Fixed& rhs ) const;
		bool	operator!=( const Fixed& rhs ) const;
	
		Fixed	operator+( const Fixed& rhs ) const;
		Fixed	operator-( const Fixed& rhs ) const;
		Fixed	operator*( const Fixed& rhs ) const;
		Fixed	operator/( const Fixed& rhs ) const;
	
		Fixed&	operator++();
		Fixed	operator++( int );
		Fixed&	operator--();
		Fixed	operator--( int );

		static Fixed&		min( Fixed& lhs, Fixed& rhs );
		static const Fixed&	min( const Fixed& lhs, const Fixed& rhs );
		static Fixed&		max( Fixed& lhs, Fixed& rhs );
		static const Fixed&	max( const Fixed& lhs, const Fixed& rhs );

		void	setRawBits( const int rawBits );
		int		getRawBits() const;
};

std::ostream&	operator<<( std::ostream& ostream, const Fixed& rhs );

#endif