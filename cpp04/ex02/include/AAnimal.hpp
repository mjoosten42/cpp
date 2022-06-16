#ifndef	AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class AAnimal {
	public:
		AAnimal( std::string type = "" );
		AAnimal( const AAnimal& rhs );
		virtual ~AAnimal();
		AAnimal&	operator=( const AAnimal& rhs );

		std::string		getType() const;
		virtual void	makeSound() const = 0;

	protected:
		std::string	_type;
};

#endif