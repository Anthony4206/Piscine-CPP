#include <iostream>
#include <string>
#include <exception>

#include "Array.hpp"

int	main(void) {
	std::cout << "---TEST: EMPTY ARRAY---" << std::endl;

	Array<int>	test_empty;

	std::cout << "test_empty size: " << test_empty.size() << std::endl;

	std::cout << std::endl << "---TEST: INT ARRAY---" << std::endl;

	Array<int> int_array(5);

	for (unsigned int i(0); i < int_array.size(); i++) {
		std::cout << "int_array[" << i << "]: " << int_array[i] << std::endl;
	}

	std::cout << std::endl << "---TEST: ARRAY COPY---" << std::endl;

	Array<int> copy_array(int_array);

	for (unsigned int i(0); i < int_array.size(); i++) {
		std::cout << "copy_array[" << i << "]: " << copy_array[i] << std::endl;
	}

	std::cout << std::endl << "---TEST: ARRAY ASSIGNMENT---" << std::endl;

	Array<int> assign_array;

	assign_array = int_array;
	for (unsigned int i(0); i < int_array.size(); i++) {
		std::cout << "assign_array[" << i << "]: " << assign_array[i] << std::endl;
	}

	std::cout << std::endl << "---TEST: ARRAY MODIFICATION---" << std::endl;

	copy_array[0] = 42;
	std::cout << "copy_array[0] after modification: " << copy_array[0] << std::endl;
	std::cout << "int_array[0] after modification of copy_array: " << int_array[0] << std::endl;

	std::cout << std::endl << "---TEST: ARRAY ACCESS---" << std::endl;

	try {
		std::cout << "Trying to access int_array[10]: " << std::endl;
		int_array[10];
	} catch (std::exception const &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return (0);
}
