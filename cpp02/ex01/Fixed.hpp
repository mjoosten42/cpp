#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		static const int	_fract;

		int	_rawBits;
	public:
		Fixed();
		Fixed( const int number );
		Fixed( const float number );
		Fixed( const Fixed& rhs );
		~Fixed();

		int		toInt() const ;
		float	toFloat() const ;
	
		Fixed&	operator=( const Fixed& rhs);

		void	setRawBits( const int rawBits );
		int		getRawBits() const;
};

std::ostream&	operator<<( std::ostream& ostream, const Fixed& rhs );

#endif