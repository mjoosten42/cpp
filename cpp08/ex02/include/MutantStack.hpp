#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
	public:
		typedef T* iterator;
	
		MutantStack(){};
		MutantStack( const MutantStack& rhs ) {
			*this = rhs;
		}
		~MutantStack(){};
		MutantStack&	operator=( const MutantStack& rhs ) {
			std::stack<T>::operator=(rhs);
			return *this;
		}

		iterator	begin() {
			iterator it = end();
			for (size_t i = 0; i < this->size(); i++)
				it--;
			return it;
		}
		iterator	end() {
			return (&this->top() + 1);
		}
};

#endif // MUTANTSTACK_HPP
