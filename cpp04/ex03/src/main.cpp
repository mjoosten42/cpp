#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

#include "ICharacter.hpp"
#include "Character.hpp"

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

#include <iostream>

int	main() {
	{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
    me->use(1, *bob);

	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));

	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	
	delete bob;
	delete me;
	delete src;
	}
	system("echo; leaks materia | tail -n +18");
}
