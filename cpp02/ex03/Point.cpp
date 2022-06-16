#include "Point.hpp"

Point::Point( const Point& rhs ) {
	_x = rhs._x;
	_y = rhs._y;
}

Point::Point( float x, float y ) {
	_x = x;
	_y = y;
}

Point&	Point::operator=( const Point& rhs) {
	_x = rhs._x;
	_y = rhs._y;
	return *this;
}

Fixed&	Point::get_x() {
	return _x;
}

Fixed&	Point::get_y() {
	return _y;
}

std::ostream&	operator<<( std::ostream& ostream, const Point& rhs ) {
	Point&	_rhs = (Point&)rhs;
	return ostream << _rhs.get_x() << "," << _rhs.get_y();
}

float	Point::operator*( const Point& rhs ) const {
	return (_x * rhs._y - _y * rhs._x).toFloat();
}

Point	Point::operator-( const Point& rhs ) const {
	return Point((_x - rhs._x).toFloat(), (_y - rhs._y).toFloat());
}
