#ifndef	BRAIN_HPP
#define BRAIN_HPP

#include <string>

#define MAX_IDEAS 100

class Brain {
	private:
		std::string	_ideas[MAX_IDEAS];
		int			_index;

	public:
		Brain();
		Brain( const Brain& rhs );
		~Brain();
		Brain&	operator=( const Brain& rhs );

		void	addIdea( std::string idea);
		void	printIdeas();
};

#endif
