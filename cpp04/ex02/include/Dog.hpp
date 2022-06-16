#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	public:
		Dog();
		Dog( const Dog& Dog );
		~Dog();
		Dog&	operator=( const Dog& rhs );

		void	makeSound() const ;
		void	addIdea( const std::string& idea );
		void	printIdeas();
	private:
		Brain*	_brain;
};

#endif