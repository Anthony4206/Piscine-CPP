/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:20:01 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/20 16:20:46 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : _name("default"), _target("default"), _sign(false), _signGrade(50), _execGrade(10) {
	std::cout << "The constructor created a AForm" << std::endl;
}

AForm::AForm(std::string const &name, std::string const &target, unsigned int signGrade, unsigned int execGrade)
	: _name(name), _target(target), _sign(false), _signGrade(signGrade), _execGrade(execGrade) {
	if (signGrade < 1 || execGrade < 1) {
		throw AForm::GradeTooHighException();
	} else if (signGrade > 150 || execGrade > 150) {
		throw AForm::GradeTooLowException();
	}
	std::cout << "The constructor created a AForm" << std::endl;
}

AForm::AForm(AForm const &rhs)
	: _name(rhs.getName()), _target(rhs.getTarget()), _signGrade(rhs.getSignGrade()), _execGrade(rhs.getExecGrade()) {
	std::cout << "The copy constructor created a AForm" << std::endl;
	*this = rhs;
}

AForm::~AForm(void) {
	std::cout << "The destructor destroyed a AForm" << std::endl;
}

AForm	&AForm::operator=(AForm const &rhs) {
	if (this != &rhs) {
		_sign = rhs.getSign();
	}
	return (*this);
}

std::string const	AForm::getName() const {
	return (_name);
}

std::string const	AForm::getTarget() const {
	return (_target);
}

bool	AForm::getSign() const {
	return (_sign);
}

int	AForm::getSignGrade() const {
	return (_signGrade);
}

int	AForm::getExecGrade() const {
	return (_execGrade);
}

void	AForm::beSigned(Bureaucrat const &rhs) {
	if (!_sign) {
		if (_signGrade < rhs.getGrade())
			throw AForm::GradeTooLowException();
		_sign = true;
	} else {
		throw AForm::FormAlreadySign();
	}
}

const char	*AForm::GradeTooHighException::what() const throw() {
	return ("error: grade too high");
}

const char	*AForm::GradeTooLowException::what() const throw() {
	return ("error: grade too low");
}

const char	*AForm::FormAlreadySign::what() const throw() {
	return ("error: form is already sign");
}

const char	*AForm::ExecutionConditionInvalid::what() const throw() {
	return ("error: the execution conditions are invalid");
}

std::ostream	&operator<<(std::ostream &o, AForm const &rhs) {
	o << "Form " << rhs.getName() << " requiring grade " << rhs.getSignGrade()
		<< " to sign and grade " << rhs.getExecGrade() << " to execute is"
		<< ((rhs.getSign()) ? " signed" : " not signed");
	return (o);
}
