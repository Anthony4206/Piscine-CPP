#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void) {
	try {
		std::cout << "TEST 1 :" << std::endl;

		Bureaucrat					bureaucrat1("Robin", 130);
		ShrubberyCreationForm		form1(bureaucrat1.getName());

		std::cout << bureaucrat1 << std::endl;
		std::cout << form1 << std::endl;
		bureaucrat1.signForm(form1);
		std::cout << form1 << std::endl;
		form1.execute(bureaucrat1);

		Bureaucrat					bureaucrat2;
		ShrubberyCreationForm		form2(bureaucrat1.getName());

		std::cout << bureaucrat2 << std::endl;
		std::cout << form2 << std::endl;
		bureaucrat2.signForm(form2);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "TEST 2 :" << std::endl;

		Bureaucrat				bureaucrat2("Yoshi", 120);
		ShrubberyCreationForm	form2(bureaucrat2.getName());

		std::cout << bureaucrat2 << std::endl;
		std::cout << form2 << std::endl;
		form2.execute(bureaucrat2);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

/*	try {
		std::cout << std::endl << "TEST 3 :" << std::endl;

		Bureaucrat	bureaucrat3("Gandalf", 50);
		Form		form3("number three", 50, 50);

		std::cout << bureaucrat3 << std::endl;
		std::cout << form3 << std::endl;
		bureaucrat3.signForm(form3);
		bureaucrat3.downGrade(50);
		std::cout << bureaucrat3 << std::endl;
		bureaucrat3.signForm(form3);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "TEST 4 :" << std::endl;

		Bureaucrat	bureaucrat4("Pikachu", 1);
		Form		form4("number four", 0, 150);

		std::cout << bureaucrat4 << std::endl;
		std::cout << form4 << std::endl;
		bureaucrat4.signForm(form4);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "TEST 5 :" << std::endl;

		Bureaucrat	bureaucrat5("Dracula", 1);
		Form		form5("number five", 1, 151);

		std::cout << bureaucrat5 << std::endl;
		std::cout << form5 << std::endl;
		bureaucrat5.signForm(form5);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}*/

	return (0);
}
