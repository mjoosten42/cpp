#include "Brain.hpp"
#include <iostream>

Brain::Brain(): _index(0) {
	std::cout << "Brain constructor called\n";
}

Brain::~Brain(){
	std::cout << "Brain destructor called\n";
}

Brain::Brain( const Brain& rhs ) {
	*this = rhs;
}

Brain&	Brain::operator=( const Brain& rhs ) {
	_index = rhs._index;
	for (int i = 0; i < _index; i++) {
		_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

void	Brain::addIdea( std::string idea) {
	_ideas[_index] = idea;
	_index++;
	if (_index > MAX_IDEAS)
		_index = MAX_IDEAS;
}

void	Brain::printIdeas() {
	for (int i = 0; i < _index; i++) {
		std::cout << _ideas[i] << std::endl;
	}
}
