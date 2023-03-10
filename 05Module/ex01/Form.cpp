/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:59:19 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/20 15:59:21 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("default"), _sign(false), _signGrade(50), _execGrade(10) {
	std::cout << "The constructor created a Form" << std::endl;
}

Form::Form(std::string name, unsigned int signGrade, unsigned int execGrade)
	: _name(name), _sign(false), _signGrade(signGrade), _execGrade(execGrade) {
	if (signGrade < 1 || execGrade < 1) {
		throw Form::GradeTooHighException();
	} else if (signGrade > 150 || execGrade > 150) {
		throw Form::GradeTooLowException();
	}
	std::cout << "The constructor created a Form" << std::endl;
}

Form::Form(Form const &rhs)
	: _name(rhs.getName()), _signGrade(rhs.getSignGrade()), _execGrade(rhs.getExecGrade()) {
	std::cout << "The copy constructor created a Form" << std::endl;
	*this = rhs;
}

Form::~Form(void) {
	std::cout << "The destructor destroyed a Form" << std::endl;
}

Form	&Form::operator=(Form const &rhs) {
	if (this != &rhs) {
		_sign = rhs.getSign();
	}
	return (*this);
}

std::string const	Form::getName() const {
	return (_name);
}

bool	Form::getSign() const {
	return (_sign);
}

int	Form::getSignGrade() const {
	return (_signGrade);
}

int	Form::getExecGrade() const {
	return (_execGrade);
}

void	Form::beSigned(Bureaucrat const &rhs) {
	if (!_sign) {
		if (_signGrade < rhs.getGrade())
			throw Form::GradeTooLowException();
		_sign = true;
	} else {
		throw Form::FormAlreadySign();
	}
}

const char	*Form::GradeTooHighException::what() const throw() {
	return ("error: grade too high");
}

const char	*Form::GradeTooLowException::what() const throw() {
	return ("error: grade too low");
}

const char	*Form::FormAlreadySign::what() const throw() {
	return ("error: form is already sign");
}

std::ostream	&operator<<(std::ostream &o, Form const &rhs) {
	o << "Form " << rhs.getName() << " requiring grade " << rhs.getSignGrade()
		<< " to sign and grade " << rhs.getExecGrade() << " to execute is"
		<< ((rhs.getSign()) ? " signed" : " not signed");
	return (o);
}
