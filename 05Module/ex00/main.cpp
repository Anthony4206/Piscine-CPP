#include "Bureaucrat.hpp"

int	main(void) {
	try {
		std::cout << "TEST 1 :" << std::endl;

		Bureaucrat	bureaucrat1;
		Bureaucrat	bureaucrat2("Bob", 50);

		std::cout << bureaucrat1 << std::endl;
		std::cout << bureaucrat2 << std::endl;
		bureaucrat1 = bureaucrat2;
		std::cout << bureaucrat1 << std::endl;

		Bureaucrat	bureaucrat3("Tom", 0);

		std::cout << bureaucrat3 << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "TEST 2 :" << std::endl;

		Bureaucrat	bureaucrat2_bis("Bob", 151);

		std::cout << bureaucrat2_bis << std::endl;

	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "TEST 3 :" << std::endl;

		Bureaucrat	bureaucrat4("Link", 100);

		std::cout << bureaucrat4 << std::endl;
		bureaucrat4.upGrade(50);
		std::cout << bureaucrat4 << std::endl;
		bureaucrat4.upGrade(50);
		std::cout << bureaucrat4 << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "TEST 4 :" << std::endl;

		Bureaucrat	bureaucrat5("Zelda", 100);

		std::cout << bureaucrat5 << std::endl;
		bureaucrat5.downGrade(50);
		std::cout << bureaucrat5 << std::endl;
		bureaucrat5.downGrade(50);
		std::cout << bureaucrat5 << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
