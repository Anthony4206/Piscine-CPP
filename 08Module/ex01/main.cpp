#include <iostream>
#include <vector>
#include <exception>
#include <ctime>

#include "Span.hpp"

int	main(void) {
	std::srand(std::time(nullptr));

	std::cout << "---TEST 1---" << std::endl;

	try {
		Span	sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << "---TEST 2---" << std::endl;

		Span	sp2(10000);

		for (int i(0); i < 10000; i++) {
			sp2.addNumber(std::rand() % 100000);
		}

		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;

		std::cout << "---TEST 3---" << std::endl;

		Span	sp3(300000);

		for (int i(0); i < 300000; i++) {
			sp3.addNumber(std::rand() % 10000000);
		}

		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---TEST 4---" << std::endl;

	try {
		Span				sp4(10);
		int					array[] = {126, 43, 9, 231, 28, 78, 34, 42, 159, 0};
		std::vector<int>	vec(array, array + 10);

		sp4.addNumbers(vec.begin(), vec.end());

		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;

		std::cout << "---TEST 5---" << std::endl;

		Span	sp5(5);

		for (int i(0); i < 6; i++) {
			sp5.addNumber(std::rand() % 30);
		}

		std::cout << sp5.shortestSpan() << std::endl;
		std::cout << sp5.longestSpan() << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "---TEST 6---" << std::endl;

		Span				sp6(9);
		int					array[] = {126, 43, 9, 231, 28, 78, 34, 42, 159, 0};
		std::vector<int>	vec(array, array + 10);

		sp6.addNumbers(vec.begin(), vec.end());

		std::cout << sp6.shortestSpan() << std::endl;
		std::cout << sp6.longestSpan() << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "---TEST 7---" << std::endl;

		Span				sp7(5);

		sp7.addNumber(42);

		std::cout << sp7.shortestSpan() << std::endl;
		std::cout << sp7.longestSpan() << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
