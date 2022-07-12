#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array {
	public:
		Array( size_t n = 0 ): _size(n) {
			_arr = new T[_size];
		}
		Array( const Array& rhs ) {
			_arr = NULL;
			*this = rhs;
		}
		~Array() {
			delete[] _arr;
		}
		Array&	operator=( const Array& rhs ) {
			_size = rhs._size;
			delete[] _arr;
			_arr = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_arr[i] = rhs._arr[i];
			return *this;
		}
		T&	operator[]( size_t index ) {
			if (index >= _size)
				throw std::out_of_range("out of range");
			return (_arr[index]);
		}
		size_t size() const {
			return _size;
		}
		
	private:
		T*		_arr;
		size_t	_size;
};

#endif // ARRAY_HPP
