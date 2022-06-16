#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main() {
	{
	Dog	dog1;
	Dog	dog2;

	std::cout << std::endl;

	dog1.addIdea("Run");
	dog2 = dog1;
	dog2.printIdeas();

	std::cout << std::endl;

	Cat	cat1;

	std::cout << std::endl;

	cat1.addIdea("Laze around");
	Cat	cat2(cat1);
	std::cout << std::endl;
	cat2.printIdeas();

	Animal*	zoo[10];

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		i % 2 ? zoo[i] = new Dog : zoo[i] = new Cat;

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		delete zoo[i];
	}
	system("echo; leaks zoo | tail -n +18");
}
