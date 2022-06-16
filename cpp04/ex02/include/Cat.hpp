#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
	public:
		Cat();
		Cat( const Cat& Cat );
		~Cat();
		Cat&	operator=( const Cat& rhs );

		void	makeSound() const ;
		void	addIdea( const std::string& idea );
		void	printIdeas();
	private:
		Brain*	_brain;
};

#endif