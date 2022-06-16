#include <iostream>
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point	a(0, 0);
	Point	b(1, 0);
	Point	c(0, 1);

	std::cout << std::boolalpha;
	std::cout << bsp(a, b, c, Point(0.2f, 0.2f)) << std::endl;
	std::cout << bsp(a, b, c, Point(0.21f, 0.42f)) << std::endl;
	std::cout << bsp(a, b, c, Point(0.6f, 0.6f)) << std::endl;
	std::cout << bsp(a, b, c, Point(-0.1f, 0.1f)) << std::endl;
	std::cout << bsp(a, b, c, Point(0, 0)) << std::endl;
	std::cout << bsp(a, b, c, Point(0.01f, 0.01f)) << std::endl;
	std::cout << bsp(a, b, c, Point(0.5f, 0.5f)) << std::endl;
	std::cout << bsp(a, b, c, Point(0.49f, 0.49f)) << std::endl;
}
