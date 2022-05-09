#include "Zombie.hpp"
#include <libc.h>

Zombie*	newZombie( std::string name );
void 	randomChump( std::string name );

int	main( void ) {
	Zombie	*ptr = newZombie("Jelle");
	randomChump("Jane");
	delete ptr;
}