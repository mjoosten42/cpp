#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void ) { }

Zombie::Zombie( std::string name ) : name(name) {
	announce();
}

Zombie::~Zombie( void ) {
	std::cout << name << " has died" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::giveName( std::string name ) {
	this->name = name;
}
