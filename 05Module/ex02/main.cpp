/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:20:22 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/20 16:20:39 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
		form1.execute(bureaucrat1);
		form1.execute(bureaucrat1);

		Bureaucrat					bureaucrat2;
		ShrubberyCreationForm		form2(bureaucrat2.getName());

		std::cout << bureaucrat2 << std::endl;
		std::cout << form2 << std::endl;
		bureaucrat2.signForm(form2);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "TEST 2 :" << std::endl;

		Bureaucrat				bureaucrat3("Yoshi", 120);
		ShrubberyCreationForm	form3(bureaucrat3.getName());

		std::cout << bureaucrat3 << std::endl;
		std::cout << form3 << std::endl;
		form3.execute(bureaucrat3);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "TEST 3 :" << std::endl;

		Bureaucrat				bureaucrat4("Tommy", 140);
		ShrubberyCreationForm	form4(bureaucrat4.getName());

		std::cout << bureaucrat4 << std::endl;
		std::cout << form4 << std::endl;
		bureaucrat4.signForm(form4);
		std::cout << form4 << std::endl;
		form4.execute(bureaucrat4);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "TEST 4 :" << std::endl;

		Bureaucrat				bureaucrat5("Gandalf", 40);
		RobotomyRequestForm		form5(bureaucrat5.getName());

		std::cout << bureaucrat5 << std::endl;
		std::cout << form5 << std::endl;
		bureaucrat5.signForm(form5);
		std::cout << form5 << std::endl;
		form5.execute(bureaucrat5);

		Bureaucrat				bureaucrat6("Ron", 50);
		RobotomyRequestForm		form6(bureaucrat6.getName());

		std::cout << bureaucrat6 << std::endl;
		std::cout << form6 << std::endl;
		bureaucrat6.signForm(form6);
		std::cout << form6 << std::endl;
		form6.execute(bureaucrat6);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "TEST 5 :" << std::endl;

		Bureaucrat					bureaucrat7("Romeo", 1);
		PresidentialPardonForm		form7(bureaucrat7.getName());

		std::cout << bureaucrat7 << std::endl;
		std::cout << form7 << std::endl;
		bureaucrat7.signForm(form7);
		std::cout << form7 << std::endl;
		form7.execute(bureaucrat7);

		Bureaucrat					bureaucrat8("Ron", 10);
		PresidentialPardonForm		form8(bureaucrat8.getName());

		std::cout << bureaucrat8 << std::endl;
		std::cout << form8 << std::endl;
		bureaucrat8.signForm(form8);
		std::cout << form8 << std::endl;
		form8.execute(bureaucrat8);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "TEST 6 :" << std::endl;

		Bureaucrat	bureaucrat5("Dracula", 1);
		ShrubberyCreationForm		form9("garden");
		RobotomyRequestForm			form10("robot");
		PresidentialPardonForm		form11("prisoner");

		std::cout << bureaucrat5 << std::endl;
		std::cout << form9 << std::endl;
		std::cout << form10 << std::endl;
		std::cout << form11 << std::endl;
		bureaucrat5.executeForm(form9);
		bureaucrat5.executeForm(form10);
		bureaucrat5.executeForm(form11);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
