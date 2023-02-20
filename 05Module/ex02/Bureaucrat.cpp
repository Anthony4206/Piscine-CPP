/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:20:13 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/20 16:20:53 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150) {
	std::cout << "The constructor created a Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name) {
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << "The constructor created a Bureaucrat" << std::endl;
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs) : _name(rhs.getName()) {
	std::cout << "The copy constructor created a Bureaucrat" << std::endl;
	*this = rhs;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "The destructor destroyed a Bureaucrat" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs) {
	if (this != &rhs) {
		_grade = rhs.getGrade();
	}
	return (*this);
}

std::string	Bureaucrat::getName(void) const {
	return (_name);
}

int	Bureaucrat::getGrade(void) const {
	return (_grade);
}

void	Bureaucrat::upGrade(unsigned int value) {
	if (_grade - value < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade -= value;
}

void	Bureaucrat::downGrade(unsigned int value) {
	if (_grade + value > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade += value;
}

void	Bureaucrat::signForm(AForm &rhs) const {
	rhs.beSigned(*this);
	if (rhs.getSign()) {
		std::cout << this->getName() << " signed " << rhs.getName() << std::endl;
	} else {
		std::cout << this->getName() << " couldn't sign " << rhs.getName()
			<< " because his grade is too low" << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form) const {
	try {
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << " (" << this->getName() << " can't execute the " 
			<< form.getName() << " form)" << std::endl;
	}

}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("error: grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return ("error: grade too low");
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (o);
}
