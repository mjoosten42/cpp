#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	private:
		static const int	_fract;
		
		int	_rawBits;
	public:
		Fixed();
		Fixed( const Fixed& point );
		~Fixed();
		Fixed& operator=( const Fixed& rhs);

		void	setRawBits( const int rawBits );
		int		getRawBits() const;
};

#endif