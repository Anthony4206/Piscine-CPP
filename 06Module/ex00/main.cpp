#include <iostream>

#include "Scalar.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "error : ./scalaire <literal>" << std::endl;
		return (-1);
	}

	std::string	literal = argv[1];

	Scalar scal(literal);

	return (0);
}
