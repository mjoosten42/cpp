#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>

class Span {
	public:
		Span( unsigned int N = 0 );
		Span( const Span& rhs );
		~Span();
		Span&	operator=( const Span& rhs );

		void	addNumber(int n);
		size_t	shortestSpan() const;
		size_t	longestSpan() const;
	
		template <class Iterator> 
		void	addNumbers(Iterator first, Iterator last) {
			_set.insert(first, last);
		}

	private:
		std::set<int>	_set;
		size_t			_maxSize;
};

#endif // SPAN_HPP
