#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point) {
	Point	ab = b - a;
	Point	bc = c - b;
	Point	ca = a - c;

	Point	ap = point - a;
	Point	bp = point - b;
	Point	cp = point - c;

	float	a_cross = ab * ap;
	float	b_cross = bc * bp;
	float	c_cross = ca * cp;

	if (a_cross > 0 && b_cross > 0 && c_cross > 0)
		return true;
	if (a_cross < 0 && b_cross < 0 && c_cross < 0)
		return true;
	return false;
}
