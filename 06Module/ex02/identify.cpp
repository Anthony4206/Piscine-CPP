#include <iostream>
#include <cstdlib>
#include <ctime>

#include "identify.hpp"

Base	*generate(void) {
	bool	initialized;
	int	random;

	initialized = false;
	if (!initialized) {
		std::srand(std::time(nullptr));
		initialized = false;
	}
	random = std::rand() % 3;

	Base	*ptr;

	switch (random) {
		case 0:
			ptr = new A;
			break ;
		case 1:
			ptr = new B;
			break ;		
		case 2:
			ptr = new C;
			break ;
	}
	return (ptr);
}

void	identify(Base *p) {
	if (dynamic_cast<A *>(p) != nullptr) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B *>(p) != nullptr) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C *>(p) != nullptr) {
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Unknown type" << std::endl;
	}
}

void	identify(Base &p) {
	if (dynamic_cast<A *>(&p) != nullptr) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B *>(&p) != nullptr) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C *>(&p) != nullptr) {
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Unknown type" << std::endl;
	}
}
