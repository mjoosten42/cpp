#include "Zombie.hpp"
#include <iostream>

Zombie	*zombieHorde( int N, std::string name );

int	main(void) {
	Zombie	*horde;
	int		N = 3;

	horde = zombieHorde(N, "Jelle");
	std::cout << "Introducing the horde: " << std::endl;
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
}