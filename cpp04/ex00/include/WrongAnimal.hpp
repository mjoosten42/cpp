#ifndef	WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal& rhs );
		virtual ~WrongAnimal();
		WrongAnimal&	operator=( const WrongAnimal& rhs );

		std::string	getType() const;
		void		makeSound() const;

	protected:
		std::string	_type;
};

#endif