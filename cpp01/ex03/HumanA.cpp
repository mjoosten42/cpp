#include "HumanA.hpp"
#include <iostream>

void	HumanA::attack( void ) {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}