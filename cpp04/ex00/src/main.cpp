#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "Type: "  << j->getType() << std::endl;
	std::cout << "Type: "  << i->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
    meta->makeSound();

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete wrongCat;
	delete wrongAnimal;
	delete meta;
	delete i;
	delete j;
}
