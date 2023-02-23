#include <iostream>
#include <vector>
#include <exception>

#include "easyfind.hpp"

int	main(void) {
	std::vector<int>	vector;

	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);
	vector.push_back(4);
	vector.push_back(5);

	try {
		std::vector<int>::iterator	it = easyfind(vector, 3);
		std::cout << "value is found at index: " << it - vector.begin() << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::vector<int>::iterator	it = easyfind(vector, 5);
		std::cout << "value is found at index: " << it - vector.begin() << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::vector<int>::iterator	it = easyfind(vector, 6);
		std::cout << "value is found at index: " << it - vector.begin() << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
}
