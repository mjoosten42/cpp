#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog constructor called\n";
	_brain = new Brain;
}

Dog::Dog( const Dog& rhs ) {
	std::cout << "Dog copy constructor called\n";
	_brain = new Brain;
	*this = rhs;
}

Dog::~Dog() {
	std::cout << "Dog destructor called\n";
	delete _brain;
}

Dog&	Dog::operator=( const Dog& rhs ) {
	Animal::operator=(rhs);
	*_brain = *rhs._brain;
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "Bark!\n";
}

void	Dog::addIdea( const std::string& idea ) {
	_brain->addIdea(idea);
}

void	Dog::printIdeas() {
	_brain->printIdeas();
}
