#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main( void ) {
	DiamondTrap	dt("Diamondy");

	std::cout << std::endl;

	dt.attack("Clappy");
	dt.takeDamage(80);
	dt.beRepaired(50);
	dt.guardGate();
	dt.highFivesGuys();
	dt.whoAmI();

	std::cout << std::endl;
}
