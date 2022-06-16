#include <iostream>
#include <ctime>

#define ROUNDS 10

class Base {
	public:
		virtual	~Base(){};
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base	*generate();
void	identify(Base* p);
void	identify(Base& p);

int	main() {
	srand(time(NULL));

	std::cout << "Identify with pointers:\n";
	for (int i = 0; i < ROUNDS; i++) {
		Base*	p = generate();
		identify(p);
		delete p;
	}
	std::cout << "\nIdentify with references:\n";
	for (int i = 0; i < ROUNDS; i++) {
		Base*	p = generate();
		Base&	r = *p;
		identify(r);
		delete p;
	}
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A\n";
		return ;
	}
	if (dynamic_cast<B*>(p)) {
		std::cout << "B\n";
		return ;
	}
	if (dynamic_cast<C*>(p)) {
		std::cout << "C\n";
		return ;
	}
}

void	identify(Base& p) {
	try	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A\n";
	}
	catch(const std::bad_cast&) {}
	try	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B\n";
	}
	catch(const std::bad_cast&) {}
	try	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C\n";
	}
	catch(const std::bad_cast&) {}
	
}

Base	*generate() {
	int	i = rand() % 3;
	switch (i) {
	case 0:
		std::cout << "A: ";
		return new A;
	case 1:
		std::cout << "B: ";
		return new B;
	case 2:
		std::cout << "C: ";
		return new C;
	default:
		return NULL;
	}
}