/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:22:10 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/20 16:22:35 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void) {
	std::cout << "The constructor created an Intern" << std::endl;
}

Intern::Intern(Intern const &rhs) {
	std::cout << "The copy constructor created an Intern" << std::endl;
	*this = rhs;
}

Intern::~Intern(void) {
	std::cout << "The destructor destroyed an Intern" << std::endl;
}

Intern	&Intern::operator=(Intern const &rhs) {
	(void)rhs;
	return (*this);
}

AForm	*Intern::makeForm(std::string const &nameForm, std::string const &target) {
	AForm *form = nullptr;
	std::string const formName[] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	try {
		switch (std::find(std::begin(formName), std::end(formName), nameForm)
			- std::begin(formName))
		{
			case 0:
				form = new ShrubberyCreationForm(target);
				break;
			case 1:
				form = new RobotomyRequestForm(target);
				break;		
			case 2:
				form = new PresidentialPardonForm(target);
				break;		
			default:
				throw Intern::BadNameException();
		}
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return (form);
}

const char	*Intern::BadNameException::what() const throw() {
	return ("error : the form name is invalid");
}
