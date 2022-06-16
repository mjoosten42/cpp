#include <iostream>

struct Data {
	int	x;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

int	main() {
	Data		data;
	Data*		ptr;
	uintptr_t	raw;

	data.x = 42;
	std::cout << &data << std::endl;
	raw = serialize(&data);
	std::cout << raw << std::endl;
	ptr = deserialize(raw);
	std::cout << ptr << std::endl;
	std::cout << "x: " << ptr->x << std::endl;
}

uintptr_t	serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
