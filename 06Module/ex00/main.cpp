#include <iostream>
#include <cmath>

#include "Scalar.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "error : ./scalaire <literal>" << std::endl;
		return (-1);
	}

	try {
		Scalar scal(argv[1]);
		std::cout << scal << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
