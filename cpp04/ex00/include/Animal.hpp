#ifndef	ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
	public:
		Animal();
		Animal( const Animal& rhs );
		virtual ~Animal();
		Animal&	operator=( const Animal& rhs );

		std::string		getType() const;
		virtual void	makeSound() const;

	protected:
		std::string	_type;
};

#endif