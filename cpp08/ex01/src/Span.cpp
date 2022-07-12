#include "Span.hpp"
#include <numeric>
#include <vector>

Span::Span( unsigned int N ): _maxSize(N) { }

Span::Span( const Span& rhs ): _maxSize(rhs._maxSize) {
	*this = rhs;
}

Span::~Span() { }

Span&	Span::operator=( const Span& rhs ) {
	_maxSize = rhs._maxSize;
	_set = rhs._set;
	return *this;
}

void	Span::addNumber( int n ) {
	if (_set.size() == _maxSize)
		throw std::length_error("Span is full");
	_set.insert(n);
}

size_t	Span::shortestSpan() const {
	std::vector<int>			spans;
	std::vector<int>::iterator	end;

	if (_set.size() < 2)
		throw std::length_error("Not enough elements");
	spans.reserve(_set.size());
	end = std::adjacent_difference(_set.begin(), _set.end(), spans.begin());
	return *std::min_element(spans.begin() + 1, end);
}

size_t	Span::longestSpan() const {
	if (_set.size() < 2)
		throw std::length_error("Not enough elements");
	return (*--_set.end() - *_set.begin());
}
