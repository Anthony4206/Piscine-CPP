/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevasse <alevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:23:10 by alevasse          #+#    #+#             */
/*   Updated: 2023/02/20 16:23:11 by alevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
	: AForm(std::string("robotomy request"), target, 72, 45) {
	std::cout << "The constructor created a RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs)
	: AForm(rhs) {
	std::cout << "The copy constructor created a RobotomyRequestForm" << std::endl;
	*this = rhs;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "The destructor destroyed a RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	if (this != &rhs) {
		AForm::operator=(rhs);
	}
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (!this->getSign() || (getExecGrade() < executor.getGrade())) {
		throw ExecutionConditionInvalid();
	}

	std::srand(std::time(nullptr));
	std::cout << "BRRRRRRRRRRRRRRRRRRRRRRRRRRRRRrrrr..." << std::endl;
	if (std::rand() % 2 == 0) {
		std::cout << getTarget() << " has been robotomized correctly" << std::endl;
	} else {
		std::cout << "The operation failed" << std::endl;
	}
}
