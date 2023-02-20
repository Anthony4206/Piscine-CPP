/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:59:32 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/20 15:59:33 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {
	try {
		std::cout << "TEST 1 :" << std::endl;

		Bureaucrat	bureaucrat1("Hulk", 1);
		Form		form1("number one", 50, 20);

		std::cout << bureaucrat1 << std::endl;
		std::cout << form1 << std::endl;
		bureaucrat1.signForm(form1);
		bureaucrat1.signForm(form1);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "TEST 2 :" << std::endl;

		Bureaucrat	bureaucrat2("Yoshi", 150);
		Form		form2("number two", 100, 50);

		std::cout << bureaucrat2 << std::endl;
		std::cout << form2 << std::endl;
		bureaucrat2.signForm(form2);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
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
	}

	return (0);
}
