#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main( void ) {
	ScavTrap	st("Scavvy");

	std::cout << std::endl;

	st.attack("Clappy");
	st.takeDamage(30);
	st.beRepaired(5);
	st.guardGate();

	std::cout << std::endl;
}
