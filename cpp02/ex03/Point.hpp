#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		Fixed	_x;
		Fixed	_y;
	public:
		Point() { };
		Point( const Point& rhs );
		Point( float x, float y );
		~Point() { };
		Point&	operator=( const Point& rhs );
		float	operator*( const Point& rhs ) const;
		Point	operator-( const Point& rhs ) const;

		Fixed&	get_x();
		Fixed&	get_y();
};

std::ostream&	operator<<( std::ostream& ostream, const Point& rhs );

#endif