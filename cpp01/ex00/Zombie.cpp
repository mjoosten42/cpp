#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name ) : name(name) {
	announce();
}

Zombie::~Zombie( void ) {
	std::cout << name << " has died" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
