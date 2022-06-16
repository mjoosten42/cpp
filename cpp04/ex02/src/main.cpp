#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main() {
	Dog	dog;
	Cat	cat;

	//AAnimal	animal;	Compile error

	AAnimal*	ptr = new Dog;
	delete 		ptr;
}
