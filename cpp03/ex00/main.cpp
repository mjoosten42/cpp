#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap	ct("Clappy");

	ct.attack("Scavvy");
	ct.takeDamage(5);
	ct.attack("Scavvy");
	ct.beRepaired(2);
	ct.attack("Scavvy");
	ct.takeDamage(7);
	ct.attack("Scavvy");
	ct.takeDamage(1);

	ClapTrap ap = ct;
}
