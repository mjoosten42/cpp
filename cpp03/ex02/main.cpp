#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main( void ) {
	FragTrap	ft("Fraggy");

	std::cout << std::endl;

	ft.attack("Clappy");
	ft.takeDamage(70);
	ft.beRepaired(20);
	ft.highFivesGuys();

	std::cout << std::endl;
}
