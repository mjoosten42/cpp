#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::iterator	easyFind(T container, int number) {
	return std::find(container.begin(), container.end(), number);
}

#endif // EASYFIND_HPP
