#include <iostream>
#include <string>

#include "iter.hpp"

int	main(void) {
	std::cout << "---TEST INT---" << std::endl;

	int			intArray[] = {1, 2, 3, 4, 5};
	size_t		intSize = sizeof(intArray) / sizeof(int);

	::iter(intArray, intSize, ::print<int>);
	std::cout << std::endl;
	::iter(intArray, intSize, ::square<int>);
	::iter(intArray, intSize, ::print<int>);
	std::cout << std::endl;

	std::cout << std::endl << "---TEST FLOAT---" << std::endl;

	float		floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
	size_t		floatSize = sizeof(floatArray) / sizeof(float);

	::iter(floatArray, floatSize, ::print<float>);
	std::cout << std::endl;
	::iter(floatArray, floatSize, ::square<float>);
	::iter(floatArray, floatSize, ::print<float>);
	std::cout << std::endl;

	std::cout << std::endl << "---TEST DOUBLE---" << std::endl;

	double		doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	size_t		doubleSize = sizeof(doubleArray) / sizeof(double);

	::iter(doubleArray, doubleSize, ::print<double>);
	std::cout << std::endl;
	::iter(doubleArray, doubleSize, ::square<double>);
	::iter(doubleArray, doubleSize, ::print<double>);
	std::cout << std::endl;

	std::cout << std::endl << "---TEST STRING---" << std::endl;

	std::string	stringArray[] = {"je", "tu", "il", "nous", "vous", "ils"};
	size_t		stringSize = sizeof(stringArray) / sizeof(std::string);

	::iter(stringArray, stringSize, ::print<std::string>);
	std::cout << std::endl;
	::iter(stringArray, stringSize, ::uppercase<std::string>);
	::iter(stringArray, stringSize, ::print<std::string>);
	std::cout << std::endl;
}
