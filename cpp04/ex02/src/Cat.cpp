#include "Cat.hpp"
#include <iostream>

Cat::Cat() : AAnimal("Cat") {
	std::cout << "Cat constructor called\n";
	_brain = new Brain;
}

Cat::Cat( const Cat& rhs ) {
	std::cout << "Cat copy constructor called\n";
	_brain = new Brain;
	*this = rhs;
}

Cat::~Cat() {
	std::cout << "Cat destructor called\n";
	delete _brain;
}

Cat&	Cat::operator=( const Cat& rhs ) {
	AAnimal::operator=(rhs);
	*_brain = *rhs._brain;
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Meow!\n";
}

void	Cat::addIdea( const std::string& idea ) {
	_brain->addIdea(idea);
}

void	Cat::printIdeas() {
	_brain->printIdeas();
}
